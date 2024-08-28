#include <iostream>

using namespace std;

class Pessoa{           //Definic�o de "molde" para Pessoas;
    public:             //modificador de acesso
        int idade = 0;  //Atributo de idade
        string nome;    //Atributo de nome
        float salario;  //Atributo do salario

        //M�todo Contrutor � inicializado do quando a classe � criado
        Pessoa(string nomeNovo, int idadeNova, float salarioNovo){
            nome = nomeNovo;
            idade = idadeNova;
            salario = salarioNovo;
        }

        //M�todo que imprimi os detales atribuidos aos campos
        void imprimiDetalhes(){
            cout << "Nome: " << nome << ", Idade: "<< idade;
            cout << ", Salario: " << salario <<endl;
        }
};

int main(){
    Pessoa pessoa1("Luiz", 25, 1344.60);    //Instancia um obj da classe pessoa passando um parametro
    pessoa1.imprimiDetalhes();

    return 0;
}
