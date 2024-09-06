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

    //Irá chamar cada função imprimir de acordo com
    //O tipo e a ordem dos pârametros chamados

    impressora1.imprimir("Oi Galera!!");
    impressora1.imprimir(3.01);

return 0;
}
