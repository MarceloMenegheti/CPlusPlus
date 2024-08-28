#include <iostream>

using namespace std;

class Pessoa{           //Definic�o de "molde" para Pessoas;
    public:             //modificador de acesso
        string nome;    //Atributo de nome

        //M�todo Contrutor � inicializado do quando a classe � criado
        Pessoa(string nomeNovo){
            printf("\nPessoa criada com nome \n");
            nome = nomeNovo;
        }

        //M�todo que imprimi uma frase na tela
        void fala(string frase){
            cout<<nome<<" diz: "<<frase;
        }

        //M�todo que faz a pessoa gritar
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
