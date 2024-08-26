#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Pessoa       //Definicão de "molde" para Pessoas
    int idade;      //Atributo de idade
    char nome[255]; //Atributo de nome
};

int main()
{
    Pessoa pessoa1;     //Cria um Struct da classe Pessoa
    pessoa1.idade = 16; //Atributo de idade

    strcpy(pessoa1.nome,"Di"); //Muda o nome da pessoa1

    //Exibe o resultado na tela
    cout << "Hello world!" << endl;

    return 0;
}
