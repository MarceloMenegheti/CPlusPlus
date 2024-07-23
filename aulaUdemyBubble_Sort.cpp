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

void selection_Sort(int vetor[TAM]){

    int posicaoDoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++){

        //Recebe a posicao inicial para o menor valor
        posicaoDoMenorValor = i;

        //Analisa os elementos na frente
        for(j = i + 1; j < TAM; j++){

            //Caso encontre um valor menor na frente dos analisados
            if(vetor[j] < vetor[posicaoDoMenorValor]){
                posicaoDoMenorValor = j;
            }

        }

        //Verifica se houve mudan�a e troca os valores
        if(posicaoDoMenorValor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenorValor];
            vetor[posicaoDoMenorValor] = aux;

        }

        imprimir_vetor(vetor);

    }

}

int main()
{
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};


    selection_Sort(vetor);
    imprimir_vetor(vetor);


    return 0;
}
