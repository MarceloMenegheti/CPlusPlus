#include <stdlib.h>
#include <string.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

void imprimirVetor(int vetor[TAM]){

cout<<"\n";
    //imprimir o vetor
    for(int i = 0;i < TAM; i++){
        cout<<vetor[i]<<" | ";
    }
}

bool pilhaVazia(int topo){

    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

//Confere se a pilha está cheia
bool pilhaCheia(int topo){
    if(topo == TAM - 1){
            return true;
    }else{
        return false;
    }

}

int pilhaTamanho(int topo){
    return topo + 1;
}

//Retorna o ultimo valor da pilha
int pilhaGet(int pilha[TAM],int *topo){

    if(pilhaVazia(*topo)){
        cout<<"a pilha esta vazia";
        return 0;
    }else{
        return pilha[*topo];
    }
}

//Adiciona um valor na pilha
void pilhaPush(int pilha[TAM], int valor, int *topo){

    //caso nao possa colocar mais valores
    //if(*topo == TAM - 1){
      if(pilhaCheia(*topo)){
        cout<<"pilha cheia";
    }else{
        *topo += 1;
        pilha[*topo] = valor;
    }

}

//Remove um valor da pilha
void pilhaPop(int pilha[TAM], int *topo){
    //if(*topo == -1){
      if(pilhaVazia(*topo)){
        cout<<"a pilha ja esta vazia!!!";
    }else{
        cout<<"valor retirado: "<< pilha[*topo];
        pilha[*topo] = 0;
        *topo -= 1;
    }
}

//Cria uma pilha e limpa ela
void pilhaConstrutor(int pilha[TAM],int *topo){

    //coloca o topo negativo para indicar uma pilha vazia
    *topo = -1;

    //imprimi o vetor
    for(int i = 0; i <TAM;i++){
        pilha[i] = 0; //iniciando todas as posicoes com 0.
    }
}

int main () {

    int pilha[TAM];
    int topo; //topo da pilha

    pilhaConstrutor(pilha,&topo);

    imprimirVetor(pilha);

    if(pilhaVazia(topo)){
        cout<<"a pilha esta Vazia";
    }

    pilhaPush(pilha, 1, &topo);
    imprimirVetor(pilha);

    cout<<"O ultimo valor da pilha: "<<pilhaGet(pilha,&topo);

    pilhaPush(pilha, 2, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha, 3, &topo);
    imprimirVetor(pilha);

    cout<<"Tamanho da pilha: "<<pilhaTamanho(topo);
    pilhaPush(pilha, 4, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha, 5, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha, 6, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha, 7, &topo);
    imprimirVetor(pilha);
    cout<<"O ultimo valor da pilha: "<<pilhaGet(pilha,&topo);

    pilhaPush(pilha, 8, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha,9, &topo);
    imprimirVetor(pilha);

    pilhaPush(pilha, 10, &topo);
    imprimirVetor(pilha);


    if(pilhaCheia(topo)){
        cout<<"a pilha esta Cheia!!";
    }

    pilhaPop(pilha, &topo);
    imprimirVetor(pilha);
    cout<<"Tamanho da pilha: "<<pilhaTamanho(topo);
    cout<<"\n"<<endl;

    return 0;
}
