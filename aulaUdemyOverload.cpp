#include <iostream>

using namespace std;

class Impressora{
    public:
        void imprimir(float reais){
            cout<<"R$:"<<reais<<endl;
        }

        //Sobrecarga - Overload
        void imprimir(string frase){
            cout<<" - "<<frase<<endl;
        }
};


int main(){

    Impressora impressora1;

    //Ir� chamar cada fun��o imprimir de acordo com
    //O tipo e a ordem dos p�rametros chamados

    impressora1.imprimir("Oi Galera!!");
    impressora1.imprimir(3.01);

return 0;
}
