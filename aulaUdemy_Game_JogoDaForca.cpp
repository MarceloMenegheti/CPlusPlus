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
    string palavras[4] = {"abacaxi","manga","morango","jabuticaba"};

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

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas){

    //cout<<"A palavra secreta eh "<<palavra<<", tamanho da palavra: "<<tamanhoDaPalavra<<endl;
    cout<<"Palavra: "<<palavraComMascara<<" (tamanho: "<<tamanhoDaPalavra<<")"<<endl;
    cout<<"\nTentativas Restantes: "<<tentativasRestantes<<endl;

    cout<<"Letras Arriscadas: ";

    for(int i = 0; i < letrasJaArriscadas.size(); i++){
        cout<<letrasJaArriscadas[i]<<", ";
    }

}

void jogarSozinho(){

    //palavra a ser adivinhada
    string palavra = retornaPalavraAleatoria();

    //tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    //palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra,tamanhoDaPalavra);

    ///Variaveis Gerais
    int tentativas =0,maxTentativas = 6;        //Numero de tentativas
    char letra;                                 //Letra digitada pelo usuario
    string letrasJaArriscadas;                  //acumula as tentativas do jogador
    bool jaDigitouLetra;

    while(palavra != palavraComMascara && maxTentativas - tentativas > 0){

        //limpaTela();

        //exibe o Status Atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maxTentativas - tentativas, letrasJaArriscadas);

        //de um palpite
        cout<<"\nDigite uma letra: ";
        cin>>letra;

        //percorre as letras ja digitadas
        for(int i = 0; i < tentativas; i++){

            //se encontrar a letra
            if(letrasJaArriscadas[i] == letra){

                cout<<"\nEssa letra ja foi digitada\n"<<endl;
                jaDigitouLetra = true;
            }
        }

        //se for uma letra nova
        if(jaDigitouLetra == false){

            letrasJaArriscadas += letra;

            //percorre a palavra real
            for(int i = 0; i < tamanhoDaPalavra; i++){

                //se a letra exitir  na palavra escondida
                if(palavra[i] == letra){

                    //faco aquela letra aparecer na palavraComMascara
                    palavraComMascara[i] = palavra[i];
                }
            }

            //aumenta uma tentativa realizada
            tentativas++;
        }

    }

    if(palavra == palavraComMascara){
        limpaTela();
        cout<<"YOU WIN!"<<endl;
    }else{
        limpaTela();
        cout<<"YOU LOOSE!"<<endl;
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
