#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
system("CLS");
}

string retornaPalavraAleatoria(){

    //Vetor com palavras dispon�veis
    string palavras[4] = {"Abacaxi","Manga","Morango","Jabuticaba"};

    //Indice gerado no intervalo {0,1,2,3}
    int indiceAleatorio = rand() % 4;

    //Exibe a palavra aleat�ria
    //cout << palavras[indiceAleatorio];

    return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

    int cont = 0;

    string palavraComMascara;

    //coloca uma mascara
    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_";
        cont++;
    }
    return palavraComMascara;
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes){

    //cout<<"A palavra secreta eh "<<palavra<<", tamanho da palavra: "<<tamanhoDaPalavra<<endl;
    cout<<"Palavra: "<<palavraComMascara<<" (tamanho: "<<tamanhoDaPalavra<<")"<<endl;
    cout<<"\nTentativas Restantes: "<<tentativasRestantes<<endl;
}

void jogarSozinho(){

    //palavra a ser adivinhada
    string palavra = retornaPalavraAleatoria();

    //tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    //palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra,tamanhoDaPalavra);

    int tentativas =0,maxTentativas = 5;
    char letra;

    while(maxTentativas - tentativas > 0){

        limpaTela();

        //exibe o Status Atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maxTentativas - tentativas);

        //de um palpite
        cout<<"Digite uma letra: ";
        cin>>letra;

        //aumenta uma tentativa realizada
        tentativas++;
    }




}

void menuInicial(){

    //Op��o escolhida pelo usu�rio
    int opcao = 0;

    //Enquanto o jogador n�o digita uma opcao v�lida, mostra o menu novamente
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
            cout<<"\nJogo iniciado\n"<<endl;
            jogarSozinho();
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


    srand( (unsigned)time(NULL));

    menuInicial();

    return 0;
}
