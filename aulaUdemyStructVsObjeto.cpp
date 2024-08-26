#include <iostream>

using namespace std;

class Pessoa{           //Definicão de "molde" para Pessoas;
    public:             //modificador de acesso
        int idade;      //Atributo de idade
        float salario;   //Atributo de salario
        string nome;    //Atributo de nome
};

int main()
{
    Pessoa pessoa1;     //Cria um Struct da classe Pessoa
    pessoa1.idade = 16; //Atributo de idade
    pessoa1.salario = 1234.5; //Muda o salario
    pessoa1.nome ="Diego"; //Muda o nome da pessoa1

    //Exibe o resultado na tela
    cout<<pessoa1.nome<<" tem "<<pessoa1.idade<<" anos";
    cout<<", R$"<<pessoa1.salario<<endl;

    return 0;
}
