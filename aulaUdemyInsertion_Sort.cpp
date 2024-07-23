#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM]){

    cout<<"\n";

    for(int i = 0; i < TAM; i++){
     cout<<" |"<<vetor[i] <<"| ";
    }
}

void insertionSort(int vetor[TAM]){
    int i,j,atual;

    for(i = 1; i < TAM; i++){
        //elemento atual em analise
        atual = vetor[i];

        //elemento anterior ao analizado
        j = i - 1;

        while((j >= 0) && (atual < vetor[j])){

            //posiciona os elementos uma posicao para frente
            vetor[j + 1] = vetor[j];

            //faz o j andar para tras
            j = j - 1;
        }


        //agora que o espaco foi aberto, colocamos o atual (Menor numero) na posicao correta
        vetor[j + 1] = atual;
        imprimir_vetor(vetor);

    }

}

int main()
{
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};


    insertionSort(vetor);

    imprimir_vetor(vetor);
    return 0;
}
