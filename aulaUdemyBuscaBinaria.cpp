#include <stdlib.h>
#include <string.h>
#include <new>
#include <iostream>
#define TAM 12

using namespace std;

void imprimirVetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        cout<<"|"<< vetor[i] <<"| ";
    }
}

int buscaBinaria(int vetor[TAM], int valorProcurado,int *posicao){

    int esquerda =0;
    int direita = TAM - 1;
    int meio;

    while(esquerda <= direita){

        //encontra o meio da analize.
        meio = (esquerda + direita)/2;

        //quando o valor do meio é encontrado.
        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            return 1;
        }

        //definindo os limites laterais.
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
    }


    return 0;

}
int main () {

    int vetor[TAM] = {3, 2, 1, 4, 8, 6, 7, 9, 5, 10,13,15};
    int valorProcurado;
    int posicao;

    imprimirVetor(vetor);

    printf("\n\nQual valor deseja encontrar? ");
    scanf("%d",&valorProcurado);

    if(buscaBinaria(vetor, valorProcurado, &posicao) == true){
        cout<<"O valor foi encontrado, na posicao: "<<posicao+1<<endl;
    }else{
        cout<<"valor nao encontrado!!"<<endl;
    }


    return 0;
}
