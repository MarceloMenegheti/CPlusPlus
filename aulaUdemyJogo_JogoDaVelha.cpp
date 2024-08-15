#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//�rea de defini��o de cabe�alhos de fun��o
void menuInicial();

void limpaTela(){
    system("CLS");
}

void menuInicial(){

    //Op��o escolhida pelo usu�rio
    int opcao = 0;

    //Nome dos jogadores
    string nomeDoJogadorUm, nomeDoJogadorDois;

    //Enquanto o jogador n�o digita uma opcao v�lida, mostra o menu novamente
    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao Jogo da Velha";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER:";

        //Faz a leitura da opcao
        cin >> opcao;

        //Faz algo de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                //Inicia o jogo
                //cout << "Jogo iniciado";
                cout << "Digite o nome do jogador 1:";
                cin >> nomeDoJogadorUm;
                cout << "Digite o nome do jogador 2:";
                cin >> nomeDoJogadorDois;
                //jogo(nomeDoJogadorUm, nomeDoJogadorDois,0,0);
                break;
            case 2:
                //Mostra informacoes do Jogo
                cout << "Informacoes do jogo";
                break;
            case 3:
                cout << "Ate mais!";
                break;
        }
    }

}

int main(){

    menuInicial();
    return 0;
}
