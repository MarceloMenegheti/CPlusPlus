#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Área de definição de cabeçalhos de função
void menuInicial();

void limpaTela(){
    system("CLS");
}

void iniciaTabuleiro(char tabuleiro[3][3]){

    //Navega por cada posição do tabuleiro e coloca o símbolo de '-'
    int linha,coluna;
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            tabuleiro[linha][coluna] = '-';
        }
    }

}

void exibeTabuleiro (char tabuleiro[3][3]){

     //Exibe o tabuleiro com suas linhas e colunas quebrando a linha ao sair de um for
    int linha,coluna;
    cout << "\n";
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            cout << tabuleiro[linha][coluna];
        }
        cout << "\n";
    }

}

void jogo(string nomeDoJogadorUm, string nomeDoJogadorDois, int pontuacaoJogadorUm, int pontuacaoJogadorDois){

    ///Variáveis Gerais
    //string nomeDoJogadorAtual;//Nomes dos jogadores
    char tabuleiro[3][3];                                       //Tabuleiro do Jogo
    int linha,coluna;                                           //Auxiliares para tabuleiro
    int linhaJogada,colunaJogada,posicaoJogada;                 //Posição em que o jogador posiciona sua marca
    int estadoDeJogo = 1;                                       //0 = Sem jogo,1 = Em Jogo
    int turnoDoJogador = 1;                                     //1 = X, 2 = O

    //Coloca os '-' no tabuleiro para indicar o vazio
    iniciaTabuleiro(tabuleiro);


    //Exibe o tabuleiro na tela
    exibeTabuleiro(tabuleiro);

    while(rodada < 9 && estadoDeJogo == 1){

        limpaTela();

        cout << "\nRodada:" << rodada << "\n";
        cout << "Pontuacao:" << nomeDoJogadorUm << " " << pontuacaoJogadorUm << " x " << pontuacaoJogadorDois << " " << nomeDoJogadorDois;

        //Exibe o tabuleiro na tela
        exibeTabuleiro(tabuleiro);

        //Exibe qual numero corresponde a qual posicao
        exibeInstrucoes();


        //Atualiza o nome do jogador atual
        if(turnoDoJogador == 1){

            nomeDoJogadorAtual = nomeDoJogadorUm;

        }else{

            nomeDoJogadorAtual = nomeDoJogadorDois;

        }
}

void menuInicial(){

    //Opção escolhida pelo usuário
    int opcao = 0;

    //Nome dos jogadores
    string nomeDoJogadorUm, nomeDoJogadorDois;

    //Enquanto o jogador não digita uma opcao válida, mostra o menu novamente
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
                jogo(nomeDoJogadorUm, nomeDoJogadorDois,0,0);
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
