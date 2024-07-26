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
        int rg;

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
                cout<<"Funcao escolhida: 2"<<endl;
                break;
            case 3:
                cout<<"Funcao escolhida: 3"<<endl;
                break;
            case 4:
                cout<<"Funcao escolhida: 4"<<endl;
                break;
            case 5:
                cout<<"Funcao escolhida: 5"<<endl;
                break;
            case 6:
                cout<<"Funcao escolhida: 6"<<endl;
                break;
            case 7:
                cout<<"Funcao escolhida: 7"<<endl;
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
