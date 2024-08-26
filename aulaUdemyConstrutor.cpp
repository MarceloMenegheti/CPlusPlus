#include <iostream>

using namespace std;

class Pessoa{           //Definicão de "molde" para Pessoas;
    public:             //modificador de acesso
        int idade = 0;  //Atributo de idade
        string nome;    //Atributo de nome

        //Método Contrutor é inicializado do quando a classe é criado
        Pessoa(){
            printf("\nPessoa criada sem nome e sem idade \n");
        }

        Pessoa(string nomeNovo){
            printf("\nPessoa criada com nome \n");
            nome = nomeNovo;
        }

        Pessoa(int idadeNova){
            printf("\nPessoa criada com idade \n");
            idade = idadeNova;
        }

        Pessoa(string nomeNovo, int idadeNova){
            printf("\nPessoa criada com nome e com idade \n");
            nome = nomeNovo;
            idade = idadeNova;
        }
};

int main()
{
    Pessoa pessoa1;                                                 //Cria um objeto da classe Pessoa sem nome e sem idade
    cout<<"Pessoa1: "<<pessoa1.nome<<", "<< pessoa1.idade <<endl;   //Exibe o resultado na tela

    Pessoa pessoa2("Diego");                                        //Cria um objeto da classe Pessoa sem idade e com nome
    cout<<"Pessoa2: "<<pessoa2.nome<<", "<< pessoa2.idade <<endl;   //Exibe o resultado na tela

    Pessoa pessoa3(25);                                             //Cria um objeto da classe Pessoa somente com a idade
    cout<<"Pessoa3: "<<pessoa3.nome<<", "<< pessoa3.idade <<endl;   //Exibe o resultado na tela

    Pessoa pessoa4("Marcelo",25);                                   //Cria um objeto da classe Pessoa com nome e com idade
    cout<<"Pessoa4: "<<pessoa4.nome<<", "<< pessoa4.idade <<endl;   //Exibe o resultado na tela

    return 0;
}
