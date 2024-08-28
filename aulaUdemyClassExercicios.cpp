#include <iostream>

using namespace std;

class Coxinha{
    public:
        string sabor = "Frango";                 //sabor caso o usuario não tenha escolhido um

        //Método construtor é inicializado quando a classe é criada recebendo o sabor pelo qual usuario escolheu
        Coxinha(string novoSabor){
            sabor = novoSabor;
        }
};



int main(){

    string sabor;
    cout<<"Informe o sabor da coxinha: ";        //Pede para ler o sabor
    cin>>sabor;                                  //Lê um sabor

    Coxinha coxinha(sabor);                      //Instancia um obj da classe Coxinha passando um parametro

    cout<<"\nCoxinha: "<<coxinha.sabor<<endl;    //Exibe na tela o resultado


    return 0;
}
