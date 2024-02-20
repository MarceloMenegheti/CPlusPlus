#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Definindo funções
int retornaDez(){

    return 4;
}

//apenas mostrando, sera executado abaixo do principal
float retornaQuebrado();

void verificaBooleana(bool variavelBooleana){

   //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!");
    }//Senão, executa o segundo bloco
    else{
        printf("Eh falso!");
    }
}

char retornaLetra(){
    return 'x';
}

bool retornaBooleano(){
    return true;
}

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\n A soma entre %d e %d eh %d", primeiroValor,segundoValor,primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}

void aumentaDezPonteiro(int *numero){
    *numero = *numero + 10;
}

void imprimirVetor(int *vetor, int tamanho){

    //declarando variavel
    int i;

    printf("\nimprindo vetor\n");

    //percorrendo o vetor
    for(i =0; i < tamanho; i++){
        printf("%d \n",vetor[i]);
    }
}

void modificaVetor(int *vetor, int tamanho){

    //variavel Contadora
    int i;

    //Percorrer o Vetor
    for(i = 0;i < tamanho; i++){
        vetor[i] += 1;
    }

}

//metodo principal
int main(){

    //Definindo Variáveis
    int a;
    char letra;
    bool variavelBooleana;
    float b;
    int v[3] = {1,2,3};//declarando vetor


    //Passando o retorno de uma função para uma variável
    a = retornaDez();

    //Char recebendo valor de uma função
    letra = retornaLetra();

    //Variável recebendo booleano
    variavelBooleana = retornaBooleano();

    verificaBooleana(variavelBooleana);

    //Imprimindo valor de a
    printf("\n%d", a);

    //Chama a função
    mostraSucessor(a);

    //Exibe o antecessor
    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    //exibe char
    printf("\n%c", letra);

    //Passando o retorno de uma função para uma variável
    b = retornaQuebrado();

    //Imprimindo valor de a
    printf("\n%f", b);

    //Função que mostra a soma
    mostraSoma(a,b);

    //Exibe o resultado da soma retornado pela função
    printf("\n A soma entre %d e %d eh %d", a,b,retornaSoma(a,b));

    //Função que aumenta 10 diretamente
    aumentaDezPonteiro(&a);

    //exibindo novo valor
    printf("\n%d \n",a);

    //vetores em funcoes
    imprimirVetor(v,3);
    modificaVetor(v,3);

    printf("\napos a mudanca");
    imprimirVetor(v,3);

    return 0;
}

//Função que retorna 10
int retornaDezEImprimeMensagem(){
    printf("\nOi galera! \n");
    int numero = 10;
    return numero;
}

//Retorna um número quebrado
float retornaQuebrado(){
    return 5.5;
}

