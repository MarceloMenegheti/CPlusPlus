#include <iostream>

using namespace std;

class Pessoa{           //Definicão de "molde" para Pessoas;
    public:             //modificador de acesso
        string nome;    //Atributo de nome

        //Método Contrutor é inicializado do quando a classe é criado
        Pessoa(string nomeNovo){
            printf("\nPessoa criada com nome \n");
            nome = nomeNovo;
        }

        //Método que imprimi uma frase na tela
        void fala(string frase){
            cout<<nome<<" diz: "<<frase;
        }

        //Método que faz a pessoa gritar
        void gritar(){
            cout<< " AAAHHH"<<endl;
        }
};

int main(){
    Pessoa pessoa("Marcelo");                              //Instancia um obj da classe pessoa passando um parametro

    pessoa.fala("E ai galera!");
    pessoa.gritar();

    return 0;
}
