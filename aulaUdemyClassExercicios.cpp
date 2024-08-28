#include <iostream>

using namespace std;

class Cachorro{                                     //Definicão de "molde" para Pessoas;
    public:                                         //modificador de acesso
        string racaDoCachorro;                      //Atributo raça caso o usuario não tenha escolhido um

        Cachorro(){
            racaDoCachorro = "Viralata";
        }

        //Método construtor é inicializado quando a classe é criada recebendo o sabor pelo qual usuario escolheu
        Coxinha(string novaRaca){
            racaDoCachorro = novaRaca;
        }
};



int main(){

    string raca;

    Cachorro cachorro;                              //Instancia um obj da classe Cachorro passando um parametro

    cout<<"Informe o Raca do cachorro: ";           //Pede para ler o raça do cachorro

    getline(cin, cachorro.racaDoCachorro);          //Lê a raça mesmo com espacos


    cout<<"Doginho:"<<cachorro.racaDoCachorro<<endl;//Exibe na tela o resultado


    return 0;
}
