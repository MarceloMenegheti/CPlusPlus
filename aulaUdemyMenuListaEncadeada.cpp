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

void addComecoEncadeado(string nome, int rg, pessoa *&ponteiroEncadeado){


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

int main(){

    //variaveis
    int funcaoDesejada = 1;

    //ponteiro para lista encadeada
    pessoa *ponteiroEncadeado = new pessoa;

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

                addComecoEncadeado(nome,rg, ponteiroEncadeado);

                break;
            case 2:
                cout<<"!"<<endl;
                break;
        }
    }

return 0;
}
