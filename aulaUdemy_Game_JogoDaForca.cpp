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

    //Vetor com palavras disponíveis
    string palavras[4] = {"Abacaxi","Manga","Morango","Jabuticaba"};

    //Indice gerado no intervalo {0,1,2,3}
    int indiceAleatorio = rand() % 4;

    //Exibe a palavra aleatória
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

void jogarSozinho(){

    //palavra a ser adivinhada
    string palavra = retornaPalavraAleatoria();

    //tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    //palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra,tamanhoDaPalavra);

    cout<<"A palavra secreta eh "<<palavra<<", tamanho da palavra: "<<tamanhoDaPalavra<<endl;
    cout<<"\nMascara: "<<palavraComMascara;
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
