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

int retornaTamanho(pessoa *ponteiroEncadeado){

    //tamanho da lista
    int tamanho = 0;

    //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeado;

    while(p != NULL){

        //atualiza o cursor
        p = p->proximo;

        //contador de tamanho aumenta
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


int main(){

    //variaveis
    int funcaoDesejada = 1;

    //ponteiro para lista encadeada
    pessoa *ponteiroEncadeado;

    //cria o primeiro valor
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

        imprimirEncadeado(ponteiroEncadeado);

        cout<<"\nEscolha um numero e pressione ENTER: ";

        cin>>funcaoDesejada;

        limpaTela();

        //variaveis usadas nas operacoes
        string nome;
        int rg,posicao;

        //chamando a funcao desejada
        switch(funcaoDesejada){
            case 1:
                cout<<""<<endl;
                break;
            case 2:
                cout<<"!"<<endl;
                break;
        }
    }

return 0;
}
