#include <iostream>

using namespace std;

class Pessoa{           //Definicão de "molde" para Pessoas;
    private:            //modificador de acesso
        string name;    //Atributo de nome

    public:             //modificador de acesso
        //Método Construtor com parametros
        Pessoa(string nameNew){
            name = nameNew;
        }

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

    Pessoa pessoa1("Marcelo");          //Cria Pessoa com Atributos
    cout<<pessoa1.getName()<<endl;      //Exibe o nome na tela

    pessoa1.setName("Cristiano");       //Modifica o nome
    cout<<pessoa1.getName()<<endl;      //Exibe o nome na tela

    return 0;


return 0;
}
