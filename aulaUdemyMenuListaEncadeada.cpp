#include <stdio.h>
#include <stdlib.h>
#include <new>


struct estrutura{
    int valorNumerico;
    struct estrutura *proximo;
};

int main(){

    //cria o inicio da lista
    estrutura *ponteiroEncadeado;

    //cria um novo valor
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->valorNumerico = 13;
    novoPrimeiroValor->proximo = NULL;

    //faz o ponteiro da encadeada apontar para o primeiro valor
    ponteiroEncadeado = novoPrimeiroValor;

    //cria um segundo valor
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->valorNumerico = 20;
    novoSegundoValor->proximo = NULL;

    //junta os valores com um encadeamento
    ponteiroEncadeado->proximo = novoSegundoValor;

    //imprimi a lista encadeada
    while(ponteiroEncadeado != NULL){

        //imprimi o valor atual
        printf("%nValor: %d",ponteiroEncadeado->valorNumerico);

        //cursor recebe a posicao de memoria do proximo valor
        ponteiroEncadeado = ponteiroEncadeado->proximo;

    }


return 0;
}
