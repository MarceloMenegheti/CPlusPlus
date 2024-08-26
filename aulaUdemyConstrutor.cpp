#include <iostream>

using namespace std;

class Pessoa{           //Definic�o de "molde" para Pessoas;
    public:             //modificador de acesso
        float preco;    //Atributo de preco
        string nome;    //Atributo de nome

        //M�todo Contrutor � inicializado do quando a classe � criado
        Pessoa(string nomeNovo){
            printf("\nPessoa criada com nome \n");
            nome = nomeNovo;
        }
};

int main()
{
    Pessoa pessoa("Marcelo");                     //Cria um objeto da classe Pessoa
    cout<<"Pessoa: "<<pessoa.nome<<endl;          //Exibe o resultado na tela

    Pessoa pessoa2("Diego");                      //Cria um objeto da classe Pessoa
    cout<<"Pessoa2: "<<pessoa2.nome<<endl;         //Exibe o resultado na tela

    return 0;
}
