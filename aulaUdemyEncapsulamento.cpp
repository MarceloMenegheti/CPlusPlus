#include <iostream>

using namespace std;

class Pessoa{           //Definicão de "molde" para Pessoas;
    private:            //modificador de acesso
        string name;    //Atributo de nome

    public:
        //Getter do nome, retorna o nome atual
        string getName(){
            return name;
        }
        //Setter do nome, atualiza o nome
        void setName(string nameNew){
            name = nameNew;
        }
};


int main(){
    Pessoa pessoa1;                 //Cria um objeto da classe Pessoa
    pessoa1.setName("Marcelo");     //Modifica o nome
    cout<<pessoa1.getName()<<endl;  //Exibe o resultado na tela

    return 0;


return 0;
}
