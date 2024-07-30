#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

struct pessoa{
    string nome;
    int rg;
    pessoa *proximo;
};

void limpaTela(){
    system("CLS");
}

//Conta quantos elementos tem na lista
int retornaTamanho(pessoa *ponteiroEncadeado){

   if(ponteiroEncadeado->nome == ""){
        return 0;
   }

   //Tamanho da lista
   int tamanho = 0;

   //Ponteiro auxiliar para percorrer a lista
   pessoa *p = ponteiroEncadeado;

   while(p != NULL){

       //Transforma o P no endereco do proximo valor, Caso o endereco seja NULL, estamos no fim da lista
        p = p->proximo;

        //Contador de tamanho da lista
        tamanho++;
   }

   return tamanho;
}

void imprimirEncadeado(pessoa *ponteiroEncadeado){

    //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeado;

        while(p != NULL){

            //imprimi a lista
            cout<< p->nome << ", "<< p->rg <<endl;

            //atualiza o cursor
            p = p->proximo;
    }
}

void addComecoEncadeada(string nome, int rg, pessoa *&ponteiroEncadeado){

        //Cria um nova estrutura
        pessoa *novoValor = new pessoa;
        novoValor->nome = nome;
        novoValor->rg = rg;

        //verifica se a lista esta vazia
        if(ponteiroEncadeado->nome == ""){
            novoValor->proximo = NULL;
        }else{
            novoValor->proximo = ponteiroEncadeado;
        }

        //redireciona o ponteiro
        ponteiroEncadeado = novoValor;

}

void addFimEncadeada(string nome, int rg, pessoa *&ponteiroEncadeado){

        //Cria um nova estrutura
        pessoa *novoValor = new pessoa;
        novoValor->nome = nome;
        novoValor->rg = rg;
        novoValor->proximo = NULL;

        pessoa *p = ponteiroEncadeado;

        while(p != NULL){

            if(p->proximo == NULL){
                p->proximo = novoValor;
                return;
            }

            //atualiza o cursor
            p = p->proximo;
    }

}

void addPosicaoEncadeada(string nome, int rg, pessoa *&ponteiroEncadeado, int posicao){

        //Cria um nova registro
        pessoa *novoValor = new pessoa;
        novoValor->nome = nome;
        novoValor->rg = rg;
        novoValor->proximo = NULL;

        pessoa *p = ponteiroEncadeado;

        int i = 0;

        while(i <= posicao){

            //quando chega um antes da posicao desejada
            if(i == posicao - 1){
                //auxiliar do valor
                pessoa *aux = new pessoa;

                //armazena o proximo valor
                aux->proximo = p->proximo;

                //coloca o novo valor proximo dele
                p->proximo = novoValor;

                //Faz com que o novo valor aponte para o proximo
                novoValor->proximo = aux->proximo;

                free(aux);
            }

            //atualiza o cursor
            p = p->proximo;

            i++;
        }
}

void removeInicioEncadeada(pessoa *&ponteiroEncadeado){

    if(ponteiroEncadeado->proximo == NULL){

        //Cria um nova Estrutura/registro
        pessoa *novoValor = new pessoa;
        novoValor->nome = "";
        novoValor->rg = 0;
        novoValor->proximo = NULL;

        ponteiroEncadeado = novoValor;

    }else{

        //faz o ponteiro principal apontar para o proximo valor
        ponteiroEncadeado = ponteiroEncadeado->proximo;

    }
}

void removeFimEncadeada(pessoa *&ponteiroEncadeado){

    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    //Ponteiro cursor auxiliar
    p = ponteiroEncadeado;

    //passa pela lista
    while(p->proximo != NULL){

        //auxiliar sempre fica sendo um antes do cursor
        aux = p;

        //Passa o cursor para o proximo elemento
        p = p->proximo;
    }

    //muda o final da lista para o penultimo elemento
    aux->proximo = NULL;

}


int main(){

    //variaveis
    int funcaoDesejada = 1;

    //ponteiro para lista encadeada
    pessoa *ponteiroEncadeado = new pessoa;
    ponteiroEncadeado->nome = "";
    ponteiroEncadeado->rg = 0;
    ponteiroEncadeado->proximo = NULL;

/*
    // cria o primeiro valor
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "Marcelo";
    novoPrimeiroValor->rg = 666;
    novoPrimeiroValor->proximo = NULL;

    //Transforma o ponteiro do inicio da lista no novo valor
    ponteiroEncadeado = novoPrimeiroValor;

    //cria o novo Segundo valor
    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "Diego";
    novoSegundoValor->rg = 111;
    novoSegundoValor->proximo = NULL;


    //Encadeamento de valores
    novoPrimeiroValor->proximo = novoSegundoValor;

*/

    while(funcaoDesejada < 9 && funcaoDesejada > 0){

        //mostrando o menu

        cout<<" Operacoes"<<endl;
        cout<<"1 - insercao de um node no inicio da lista"<<endl;
        cout<<"2 - insercao de um node no fim da lista"<<endl;
        cout<<"3 - insercao de um node na posicao"<<endl;
        cout<<"4 - retirar um node no inicio da lista"<<endl;
        cout<<"5 - retirar um node no fim da lista"<<endl;
        cout<<"6 - retirar um node na posicao"<<endl;
        cout<<"7 - procurar um node com o campo RG"<<endl;
        cout<<"8 - imprimir a lista. "<<endl;
        cout<<"9 - sair do sistema. "<<endl;

        cout<<"\nTamanho Atual: "<<retornaTamanho(ponteiroEncadeado)<<endl;

        //imprimi a lista
        if(retornaTamanho(ponteiroEncadeado) == 0){
            cout<<"\nLista Vazia!"<<endl;
        }else{
            imprimirEncadeado(ponteiroEncadeado);
        }

        cout<<"\nEscolha um numero e pressione ENTER: ";

        cin>>funcaoDesejada;

        limpaTela();

        //variaveis usadas nas operacoes
        string nome;
        int rg,posicao;

        //chamando a funcao desejada
        switch(funcaoDesejada){

            case 1:
                cout<<"Funcao escolhida: 1 - insercao de um node no inicio da lista"<<endl;
                cout<<"Digite o nome: ";
                cin>>nome;

                cout<<"Digite o rg: ";
                cin>>rg;

                addComecoEncadeada(nome,rg, ponteiroEncadeado);

                break;

            case 2:
                cout<<"Funcao escolhida: 2 - insercao de um node no fim da lista"<<endl;
                cout<<"Digite o nome: ";
                cin>>nome;

                cout<<"Digite o rg: ";
                cin>>rg;

                //se a lista for vazia. usamos a funcao de criar no inicio
                if(retornaTamanho(ponteiroEncadeado) == 0){
                     addComecoEncadeada(nome,rg,ponteiroEncadeado);
                }else{
                    //adiciona no fim da lista
                    addFimEncadeada(nome,rg, ponteiroEncadeado);
                }
                break;

            case 3:
                cout<<"Funcao escolhida: 3 - insercao de um node na posicao"<<endl;

                cout<<"Digite uma posicao: ";
                cin>>posicao;

                cout<<"Digite o nome: ";
                cin>>nome;

                cout<<"Digite o rg: ";
                cin>>rg;

                if(posicao == 0){
                     //se estiver add no comeco
                     addComecoEncadeada(nome,rg, ponteiroEncadeado);

                }else if(posicao == retornaTamanho(ponteiroEncadeado) - 1){
                    //adiciona no fim da lista
                    addFimEncadeada(nome,rg, ponteiroEncadeado);

                }else{
                    //adiciona uma posicao especifica
                    addPosicaoEncadeada(nome,rg, ponteiroEncadeado, posicao);
                }
                break;

            case 4:
                cout<<"Funcao escolhida: 4 - retirar um node no inicio da lista"<<endl;

                //se a lista for vazia
                if(retornaTamanho(ponteiroEncadeado) == 0){
                    cout<<" - Lista Vazia!"<<endl;
                }else{
                    removeInicioEncadeada(ponteiroEncadeado);
                }
                break;
            case 5:
                cout<<"Funcao escolhida: - retirar um node no fim da lista"<<endl;

                //se a lista for vazia
                if(retornaTamanho(ponteiroEncadeado) == 1){
                        removeInicioEncadeada(ponteiroEncadeado);
                }else{
                    removeFimEncadeada(ponteiroEncadeado);
                }

                break;
        }
    }

    return 0;
}
