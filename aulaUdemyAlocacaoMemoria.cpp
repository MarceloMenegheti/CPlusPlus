#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
//sem a lib 'New'.

using namespace std;

//Aloca um vetor do tamanho pedido
int* alocaVetor(int tamanho){

    int *aux;

    //tamanho de elementos int * bytes
    aux = (int*) malloc(tamanho * sizeof(int));

    //Esse ponteiro é retornado
    return aux;

}


//metodo principal
int main(){

    //ALOCACAO DINAMICA PARA VETORES
    //Ponteiro que vai apontar para o vetor criado
    int *vetor, tamanho;

    cout<<"informe o tamanho do vetor: ";
    cin>>tamanho;

    vetor = alocaVetor(tamanho);


    //imprimir o vetor
    for(int i = 0;i < tamanho; i++){
        cout<<"Vetor["<<i<<"] = "<<vetor[i]<<endl;
    }

    //liberar a memoria após usar o vetor
    free(vetor);


    //ALOCACAO DINAMICA PARA MATRIZES EM C.
    int linhas, colunas,i,j;
    int **matriz;//ponteiro de ponteiro

    printf("\ndigite as quantidades de linhas:");
    scanf("%d",&linhas);
    printf("digite as quantidades de colunas:");
    scanf("%d",&colunas);

    //alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int));

    //alocando memoria oara a coluna
    for(i=0;i<linhas;i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    printf("\n");

    //imprimindo a matriz
    for(i = 0;i < linhas; i++){
        for(j = 0; j < colunas; j++){
                matriz[i][j] = 1;
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);


    return 0;
}

