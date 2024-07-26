#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa{
    string nome;
    int rg;
};

void limpaTela(){
    system("CLS");
}

void imprimirSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){

    for(int i = 0; i < tamanhoDaLista; i++){
        cout<<i<<" - "<<ponteiroSequencial[i].nome <<", "<< ponteiroSequencial[i].rg<<endl;
    }
}

void addComecoSequencial(string nome, int rg, int *tamanhoDaLista, pessoa *&ponteiroSequencial){

    if(*tamanhoDaLista == 0){

        //caso a lista ja tenha membros
        pessoa *novaListaSequencial = new pessoa[1];

        //inserir o primeiro membros
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        //atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;

    }else{

        //caso o vetor ja tenha membros
        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

        //insere o primeiro novo elemento
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        //passa os elementos para o vetor antigo para o novo
        for(int i = 0; i < *tamanhoDaLista; i++){
            novaListaSequencial[i + 1].nome = ponteiroSequencial[i].nome;
            novaListaSequencial[i + 1].rg = ponteiroSequencial[i].rg;
        }

        //atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;
    }

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void addFimSequencial(string nome, int rg, int *tamanhoDaLista, pessoa *&ponteiroSequencial){

    //criar uma lista com um tamanho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    //passa os elementos do vetor antigo para o novo
    for(int i = 0; i < *tamanhoDaLista; i++){
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

    //Posiciona o ultimo elemento
    novaListaSequencial[*tamanhoDaLista].nome = nome;
    novaListaSequencial[*tamanhoDaLista].rg = rg;

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

addPosicaoSequencial(string nome, int rg,int *tamanhoDaLista,pessoa *&ponteiroSequencial, int posicao){

    //criar uma lista com um tamanho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    //passa os elementos do vetor antigo para o novo
    for(int i = 0; i < posicao; i++){
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

    //add o novo registro na posicao correta
    novaListaSequencial[posicao].nome = nome;
    novaListaSequencial[posicao].rg = rg;

    //passa os elementos do vetor antigo para o novo
    for(int i = posicao + 1; i < *tamanhoDaLista + 1; i++){
        novaListaSequencial[i].nome = ponteiroSequencial[i - 1].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i - 1].rg;
    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void removeInicioSequencial(int *tamanhoDaLista,pessoa *&ponteiroSequencial){

    //cria um vetor com uma posicao a menos
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //passa os elementos do vetor antigo para o novo
    for(int i = 1 ; i < *tamanhoDaLista; i++){
        novaListaSequencial[i - 1].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i - 1].rg = ponteiroSequencial[i].rg;
    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //reduz o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista - 1;

}

void removeFimSequencial(int *tamanhoDaLista,pessoa *&ponteiroSequencial){

    //cria um vetor com uma posicao a menos
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //passa os elementos do vetor antigo para o novo menos o ultimo
    for(int i = 0 ; i < *tamanhoDaLista - 1; i++){
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //reduz o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista - 1;

}

void removePosicaoSequencial(int *tamanhoDaLista,pessoa *&ponteiroSequencial, int posicao){

    //cria um vetor com uma posicao a menos
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //passa os valores de acordo com o index
    for(int i = 0 ; i < *tamanhoDaLista - 1; i++){
            //se estiver antes da posicao
            if(i < posicao){
                novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
                novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
            }else{
                novaListaSequencial[i].nome = ponteiroSequencial[i + 1].nome;
                novaListaSequencial[i].rg = ponteiroSequencial[i + 1].rg;
            }
    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //reduz o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

string retornaNomeSequencial(int *tamanhoDaLista,pessoa *&ponteiroSequencial, int rg){

    string nome = "Nao encontrado\n";

    //Busca pelo nome com o rg digitado
    for(int j = 0; j < *tamanhoDaLista; j++){
        if(ponteiroSequencial[j].rg == rg){
            nome = ponteiroSequencial[j].nome;
        }
    }

    return nome;
}

int main(){

    //variaveis
    int funcaoDesejada = 1;

    //ponteiro para lista sequecial
    pessoa *ponteiroSequecial;

    //tamanho da lista
    int tamanhoDaLista = 0;

    //exemplo
    pessoa *exemploListaSequecial = new pessoa[tamanhoDaLista];

    /*//dois registros de exemplo
    exemploListaSequecial[0].nome = "John";
    exemploListaSequecial[0].rg = 178;

    exemploListaSequecial[1].nome = "Bia";
    exemploListaSequecial[1].rg = 476;*/

    //faz o ponteiro principal apontar para o novo vetor
    ponteiroSequecial = exemploListaSequecial;


    //mostrando o menu
    while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //imprimi a lista completa
        imprimirSequencial(ponteiroSequecial, tamanhoDaLista);

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
        cout<<"Escolha um numero e pressione ENTER: ";

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

                addComecoSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial);
                break;
            case 2:
                cout<<"Funcao escolhida: 2 - insercao de um node no fim da lista"<<endl;
                cout<<"Digite o nome: ";
                cin>>nome;

                cout<<"Digite o rg: ";
                cin>>rg;

                //se a lista for vazia. usamos a funcao de criar no inicio
                if(tamanhoDaLista == 0){
                     addComecoSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial);
                }else{
                    //adiciona no fim da lista
                    addFimSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial);
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
                     addComecoSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial);
                }else if(posicao == tamanhoDaLista){
                    //adiciona no fim da lista
                    addFimSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial);
                }else{
                    //adiciona uma posicao especifica
                    addPosicaoSequencial(nome,rg, &tamanhoDaLista,ponteiroSequecial,posicao);
                }
                break;
            case 4:
                cout<<"Funcao escolhida: 4 - retirar um node no inicio da lista"<<endl;

                //se a lista for vazia
                if(tamanhoDaLista == 0){
                    cout<<" - Lista Vazia!"<<endl;
                }else{
                    removeInicioSequencial(&tamanhoDaLista, ponteiroSequecial);
                }
                break;
            case 5:
                cout<<"Funcao escolhida: - retirar um node no fim da lista"<<endl;

                //se a lista for vazia
                if(tamanhoDaLista == 0){
                    cout<<" - Lista Vazia!"<<endl;
                }else{
                    removeFimSequencial(&tamanhoDaLista, ponteiroSequecial);
                }

                break;
            case 6:
                cout<<"Funcao escolhida: 6 - retirar um node na posicao"<<endl;

                //se a lista for vazia
                if(tamanhoDaLista == 0){
                    cout<<" - Lista Vazia!"<<endl;
                }else{

                    cout<<"Digite uma posicao: ";
                    cin>>posicao;

                    if(posicao == 0){
                        removeInicioSequencial(&tamanhoDaLista, ponteiroSequecial);
                    }else if(posicao == tamanhoDaLista - 1){
                        removeFimSequencial(&tamanhoDaLista, ponteiroSequecial);
                    }else{
                        removePosicaoSequencial(&tamanhoDaLista, ponteiroSequecial, posicao);
                    }
                }
                break;
            case 7:
                cout<<"Funcao escolhida: 7 - procurar um node com o campo RG"<<endl;

                //se a lista for vazia
                if(tamanhoDaLista == 0){
                    cout<<" - Lista Vazia!"<<endl;
                }else{

                    cout<<"Digite um rg: ";
                    cin>>rg;

                    cout<<"\nNome do RG "<<rg<<": "<< retornaNomeSequencial(&tamanhoDaLista, ponteiroSequecial, rg)<<endl;
                }


                break;
            case 8:
                cout<<"Funcao escolhida: 8"<<endl;
                break;
            case 9:
                cout<<"Funcao escolhida: 9"<<endl;
                break;
        }
    }

    return 0;
}
