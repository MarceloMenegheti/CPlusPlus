#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM], int topo){

    cout<<"\n";

    for(int i = 0; i < TAM; i++){
     cout<<vetor[i] <<" - ";
    }
}

void fila_construtor(int *frente,int *tras){
    *frente = 0;
    *tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){

    if(*tras == TAM -1){
        cout<<"fila cheia!";
    }else{
        *tras += 1;
        fila[*tras] = valor;
    }
}

int fila_tamanho(int frente,int tras){
    return(tras - frente) + 1;
}

int main()
{

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente,tras;
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 8, &tras);

    imprimir_vetor(fila, fila_tamanho(tras, frente));

    return 0;
}
