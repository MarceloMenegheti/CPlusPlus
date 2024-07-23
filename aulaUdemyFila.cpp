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

bool fila_vazia(int frente, int tras){
    if(frente > tras){
        return true;
    }else{
        return false;
    }
}

bool fila_cheia(int tras){
    if(tras == TAM - 1){
        return true;
    }
    return false;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){

    if(fila_cheia(*tras)){
        cout<<"fila cheia!";
    }else{
        *tras = *tras +  1;
        fila[*tras] = valor;
    }
}

void fila_desenfileirar(int fila[TAM],int *frente,int tras){
    if(!fila_vazia(*frente,tras)){
    cout<<"O valor "<< fila[*frente]<<" foi removido | ";
    fila[*frente] = 0;
    *frente = *frente + 1;
    }else{
        cout << "Imposivel desinfileirar uma lista vazia | ";
    }
}


int fila_tamanho(int frente,int tras){
    return(tras - frente) + 1;
}

int main()
{

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente,tras;
    int valor, valorRetirado;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 9, &tras);

    imprimir_vetor(fila, fila_tamanho(tras, frente));

    fila_desenfileirar(fila,&frente,tras);
    fila_desenfileirar(fila,&frente,tras);
    fila_desenfileirar(fila,&frente,tras);
    fila_desenfileirar(fila,&frente,tras);
    fila_desenfileirar(fila,&frente,tras);

    imprimir_vetor(fila, fila_tamanho(tras, frente));



    return 0;
}
