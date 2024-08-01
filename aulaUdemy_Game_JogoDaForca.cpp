#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela(){

system("CLS");

}

void menuInicial(){

    //Opção escolhida pelo usuário
    int opcao = 0;

    //Enquanto o jogador não digita uma opcao válida, mostra o menu novamente
    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao Jogo";
        cout << "\n1 - Jogar Sozinho";
        cout << "\n2 - Jogar em Dupla";
        cout << "\n3 - Sobre";
        cout << "\n4 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER: ";
        cin>>opcao;

        //faz algo de acordo com a opcao escolhida
        switch(opcao){

        case 1:
            cout<<"\nJogo iniciado"<<endl;
            break;

        case 2:
            cout<<"\nInformacoes do jogo"<<endl;
            break;

        case 3:
            cout<<"\nAte mais!"<<endl;
            break;

        }
    }
}
int main(){

menuInicial();

    return 0;
}
