#include <iostream>

using namespace std;

class Cachorro{                                     //Definic�o de "molde" para Pessoas;
    public:                                         //modificador de acesso
        string racaDoCachorro;                      //Atributo ra�a caso o usuario n�o tenha escolhido um

        Cachorro(){
            racaDoCachorro = "Viralata";
        }

        //M�todo construtor � inicializado quando a classe � criada recebendo o sabor pelo qual usuario escolheu
        Coxinha(string novaRaca){
            racaDoCachorro = novaRaca;
        }
};



int main(){

    string raca;

    Cachorro cachorro;                              //Instancia um obj da classe Cachorro passando um parametro

    cout<<"Informe o Raca do cachorro: ";           //Pede para ler o ra�a do cachorro

    getline(cin, cachorro.racaDoCachorro);          //L� a ra�a mesmo com espacos


    cout<<"Doginho:"<<cachorro.racaDoCachorro<<endl;//Exibe na tela o resultado


    return 0;
}
