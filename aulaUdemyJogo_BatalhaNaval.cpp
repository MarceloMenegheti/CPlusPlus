
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

void menuInicial();

void iniciaTabuleiro(char tabuleiro[10][10],char mascara[10][10]){

    int linha, coluna;

    //popula o tabuleiro com Agua
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '*';
        }

    }

}

void exibeMapa(){

    //mapa indicador de numeros da coluna
    for(int j = 0; j < 10; j++){
        if(j == 0){
            cout<<"     ";
        }
        cout<<j<<" ";
    }
    cout<<endl;

    //mapa indicador de " | " nas colunas
    for(int j = 0; j < 10; j++){
        if(j == 0){
            cout<<"     ";
        }
        cout<<"| ";
    }
    cout<<endl;
}

void exibeTabuleiro(char tabuleiro[10][10],char mascara[10][10], bool mostraGabarito){

    //Add cor
    char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
    char green[] = { 0x1b, '[', '1', ';', '3', '2', 'm', 0 };
    char normal[] = { 0x1b, '[', '1', ';', '3', '9', 'm', 0 };

    //printando a cor
    //cout<<blue;

    //Exibe o tabuleiro
    int linha, coluna;

    for(linha = 0; linha < 10; linha++){
            cout<<linha<<" - ";
        for(coluna = 0; coluna < 10; coluna++){
            switch(mascara[linha][coluna]){
                case 'A':
                    cout<<blue<<" "<<mascara[linha][coluna]<<normal;
                    break;
                case 'P':
                    cout<<green<<" "<<mascara[linha][coluna]<<normal;
                    break;
                default:
                    cout<<" "<<mascara[linha][coluna];
                    break;
            }
        }
        cout<<endl;
    }

    //Exibe o tabuleiro
    if(mostraGabarito){
        for(linha = 0; linha < 10; linha++){
            for(coluna = 0; coluna < 10; coluna++){
                cout<<" "<<tabuleiro[linha][coluna];
            }
            cout<<endl;
        }
    }
}

void posicionaBarcos(char tabuleiro[10][10]){

    int quantidade = 10, quantidadePosicionada = 0;

    while(quantidadePosicionada < quantidade){

        int linhaBarcosAleatoria = rand() % 10;
        int colunaBarcosAleatoria = rand() % 10;

        if(tabuleiro[linhaBarcosAleatoria][colunaBarcosAleatoria] == 'A'){

            //posiciona 10 barcos aleatoriamente
            tabuleiro[linhaBarcosAleatoria][colunaBarcosAleatoria] = 'P';

            //aumenta o contador de barcos posicionados
            quantidadePosicionada++;

        }
    }

    /*
    colocando manualmente:

    tabuleiro[0][0] = 'P';
    tabuleiro[1][1] = 'P';
    tabuleiro[2][2] = 'P';
    tabuleiro[3][3] = 'P';
    tabuleiro[4][4] = 'P';

    */

}

void verificaTiro(char tabuleiro[10][10],int linhaJogada ,int colunaJogada, int *pontos, string *mensagem){

        switch(tabuleiro[linhaJogada][colunaJogada]){
            case 'P':
                *pontos = *pontos + 10;
                *mensagem = "Voce Acertou um barco! [10pts]";
                break;
            case 'A':
                *mensagem = "Voce Acertou um Agua!!";
                break;
        }
}

void jogo(string nomeDoJogador){

    ///Variaveis Gerais
    char tabuleiro[10][10],mascara[10][10];
    int linha, coluna, linhaJogada, colunaJogada, estadoDeJogo = 1;
    int tentativas, maxTentativas = 6, pontos = 0, opcaoDeReinicio;
    string mensagem = "Bem Vindo ao Jogo";
    bool mostraGabarito;

    //inicia o tabuleiro
    iniciaTabuleiro(tabuleiro, mascara);

    //posiciona barcos
    posicionaBarcos(tabuleiro);

    while(tentativas < maxTentativas){

        limpaTela();

        //exibe o mapa
        exibeMapa();

        //exibe o tabuleiro
        exibeTabuleiro(tabuleiro,mascara, false);

        cout<<"\nPontos: "<<pontos<<" - Tentativas restantes: "<<maxTentativas - tentativas<<endl;
        cout<<"\n"<<mensagem<<endl;

        //verificação de dados
        linhaJogada = -1;
        colunaJogada = -1;

        //validação simples
        while((linhaJogada < 0 || colunaJogada < 0) || (linhaJogada > 9 || colunaJogada > 9)){

            cout<<"\n"<<nomeDoJogador<<" - Digite uma linha: ";
            cin>>linhaJogada;

            cout<<"\n"<<nomeDoJogador<<" - Digite uma coluna: ";
            cin>>colunaJogada;

        }



        verificaTiro(tabuleiro,linhaJogada,colunaJogada, &pontos, &mensagem);

        //revela oque esta no tabuleiro
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

        tentativas++;
    }

    cout<< "\nFim de jogo, oque deseja fazer?";
    cout << "\n1 - Jogar Novamente";
    cout << "\n2 - Sobre";
    cout << "\n3 - Sair";
    cout << "\nEscolha uma opcao e tecle ENTER:";
    cin>>opcaoDeReinicio;

    switch(opcaoDeReinicio){
        case 1:
            jogo(nomeDoJogador);
            break;
        case 2:
            menuInicial();
            break;
        case 3:
            break;
    }

}


void menuInicial(){

    //Opção escolhida pelo usuário
    int opcao = 0;

    string nomeDoJogador;

    //Enquanto o jogador não digita uma opcao válida, mostra o menu novamente
    while(opcao < 1 || opcao > 3){

        limpaTela();

        cout << "Bem vindo ao Jogo";
        cout << "\n1 - Jogar Sozinho";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER:";

        //Faz a leitura da opcao
        cin >> opcao;

        //Faz algo de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                cout << "Qual e o seu nome? "<<endl;
                cin>>nomeDoJogador;
                jogo(nomeDoJogador);

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
