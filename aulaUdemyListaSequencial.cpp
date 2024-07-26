#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#include <new>

using namespace std;


//aloca um vetor do tamanho pedido
int* alocaVetor(int tam){
    //Cria um ponteiro auxiliar
    int *v;

    //aloca memória para um novo vetor
    v = (int *) malloc(tam * sizeof(int));

    return v;

}

//imprimi a lista sequencial
void imprimirSequencial(int *vetor, int tamanhoDaListaSequencial){

    //Exibindo valores
    for(int i = 0; i < tamanhoDaListaSequencial; i++){
        printf("\nValor %d: %d", i , vetor[i]);
    }
}


int main(){

    int vetor[TAM] = {1,2,3}, i, tamanhoDaLista;

    //Exibindo valores
    for(i = 0; i < TAM; i++){
        printf("\nValor %d: %d", i , vetor[i]);
    }

    imprimirSequencial(vetor,3);

    printf("\n\n");

    //Lendo valores C
    for(i = 0; i < TAM; i++){
            printf("Input: ");
        scanf("%d", &vetor[i]);
    }

    //Exibindo valores
    for(int i = 0; i < TAM; i++){
        printf("\nValor %d: %d", i , vetor[i]);
    }

    printf("\n\n");

    //pedindo tamanho do vetor
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanhoDaLista);

    //ponteiro para um novo vetor
    int *vetorLidoNaHora;

    //vetor o espaco da memória que foi criado para o vetor
    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

   //lendo novos valores C
    for(i = 0; i < tamanhoDaLista; i++){
            printf("Input: ");
        scanf("%d", &vetorLidoNaHora[i]);
    }

    imprimirSequencial(vetorLidoNaHora, tamanhoDaLista);
    printf("\n\n");

    //criando com c++
    int *vetorEmCPlusPlus = new int(5);
    //lendo novos valores C
    for(i = 0; i < tamanhoDaLista; i++){
            printf("Input: ");
        scanf("%d", &vetorLidoNaHora[i]);
    }

    imprimirSequencial(vetorEmCPlusPlus, 5);
    return 0;
}
