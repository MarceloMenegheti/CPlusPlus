#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

int main(){

    //variaveis
    int funcaoDesejada = 1;
limpaTela();
    while(funcaoDesejada < 10 && funcaoDesejada > 0){


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


        switch(funcaoDesejada){
            case 1:
                cout<<"Funcao escolhida: 1"<<endl;
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
