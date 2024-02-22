#include <stdlib.h>
#include <string.h>
#include <new>
#include <iostream>
#define TAM 10

using namespace std;

void imprimirVetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        cout<<"|"<< vetor[i] <<"| ";
    }
}

int buscaSimples(int vetor[TAM],int valorProcurado,int *posicao){

    //Verifica se o valor foi encontrado
    bool valorEncontrado;

    //Percorre a lista em busca do valor
    for(int i=0;i<TAM;i++){
            if(vetor[i] == valorProcurado){
                valorEncontrado = true;
                *posicao = i;
            }
    }

    if(valorEncontrado){
        return 1;
    }else{
        return 0;
    }
}

int main () {

    int vetor[TAM] = {3,2,1,4,8,6,7,9,5,10};
    int valorProcurado;
    int posicao;

    imprimirVetor(vetor);

    printf("\n\nQual valor deseja encontrar? ");
    scanf("%d",&valorProcurado);

    if(buscaSimples(vetor, valorProcurado, &posicao) == true){
        cout<<"O valor foi encontrado, na posicao: "<<posicao+1<<endl;
    }else{
        cout<<"valor nao encontrado!!"<<endl;
    }


    return 0;
}
