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

void quick_Sort(int vetor[TAM],int inicio, int fim){

    int left, right, pivo, meio,aux;

    //limites esquerda e direita da regiao analizadas
    left = inicio;
    right = fim;

    //ajustando auxiliares do centro
    meio = (int) (left + right) / 2;
    pivo = vetor[meio];

    while(right > left){


        while(vetor[left] < pivo){
            left = left + 1;
        }
        while(vetor[right] > pivo){
            right = right - 1;
        }
        if(left <= right){

            //faz a troca
            aux = vetor[left];
            vetor[left] = vetor[right];
            vetor[right] = aux;

            //faz os limites laterais caminharem para o centro
            left = left + 1;
            right = right - 1;
        }
        //Recursao para continuar ordenando
        if(inicio < right){
            quick_Sort(vetor, inicio, right);
        }
        //Recursao para continuar ordenando
        if(left < fim){
            quick_Sort(vetor,left,fim);
        }
    }
}

int main()
{
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};


    imprimir_vetor(vetor);
    quick_Sort(vetor,0, TAM);
    imprimir_vetor(vetor);


    return 0;
}
