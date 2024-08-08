
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

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
        cout << "\nEscolha uma opcao e tecle ENTER:";

        //Faz a leitura da opcao
        cin >> opcao;

        //Faz algo de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                cout << "Jogo iniciado"<<endl;
                //Inicia o jogo
                /*if(jogar(1) == 1){
                    menuInicial();
                }*/
                break;
            case 2:
                cout << "Jogar em dupla"<<endl;
                /*Inicia o jogo
                if(jogar(2) == 1){
                    menuInicial();
                }*/
                break;
            case 3:
                /*Mostra informacoes do Jogo
                cout << "Informacoes do jogo";
                limpaTela();
                cout << "Jogo desenvolvido por Joao em 2017";
                cout << "\n1 - Voltar";
                cout << "\n2 - Sair";
                cin >> opcao;
                if(opcao == 1){
                    menuInicial();
                }*/

                break;
            case 4:
                cout << "Ate mais!";
                break;
        }
    }

}

int main(){

    menuInicial();

    return 0;
}
