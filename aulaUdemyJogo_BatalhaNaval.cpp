
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
    system("CLS");
}
void iniciaTabuleiro(char tabuleiro[10][10],char mascara[10][10]){

    int linha, coluna;

    //popula o tabuleiro com Agua
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '#';
        }

    }

}

void exibeTabuleiro(char tabuleiro[10][10],char mascara[10][10]){

    int linha, coluna;

    //Exibe o tabuleiro
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            //cout<<" "<<tabuleiro[linha][coluna];
            cout<<" "<<mascara[linha][coluna];
        }
        cout<<endl;
    }

}

void jogo(){

    ///Variaveis Gerais
    char tabuleiro[10][10],mascara[10][10];
    int linha, coluna, linhaJogada, colunaJogada, estadoDeJogo = 1;

    //inicia o tabuleiro
    iniciaTabuleiro(tabuleiro, mascara);

    while(estadoDeJogo == 1){

        limpaTela();

        //exibe o tabuleiro
        exibeTabuleiro(tabuleiro,mascara);

        cout<<"Digite uma linha: ";
        cin>>linhaJogada;

        cout<<"Digite uma coluna: ";
        cin>>colunaJogada;

        //revela oque esta no tabuleiro
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

    }

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
                jogo();
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
