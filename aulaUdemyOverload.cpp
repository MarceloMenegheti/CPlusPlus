#include <iostream>

using namespace std;

class Calculadora{
    public:
        int soma(int x,int y){
            return x + y;
        }

        //Sobrecarga - Overload
        int soma(int x,int y,int z){
            return x + y + z;
        }
};


int main(){

    Calculadora calc;

    //Irá chamar cada função imprimir de acordo com
    //O tipo e a ordem dos pârametros chamados

    cout<<"soma: "<<calc.soma(1 , 8)<<endl;
    cout<<"soma: "<<calc.soma(1 , 8, 35)<<endl;

return 0;
}
