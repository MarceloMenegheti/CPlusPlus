#include<iostream>

using namespace std;

class FormaGeometrica{
    public:
        virtual int Area() = 0; //Funçao Virtual = será sobrescrita

        //Funtion to set Largura
        void setLargura(int largura){
            this->largura = largura;
        }

        void setAltura(int altura){
            this->altura = altura;
        }

    protected:
        int largura;
        int altura;
};

class Retangulo : public FormaGeometrica{
    public:
        //Sobrescreve a Area() de FormaGeometrica
        int Area(){
            return (largura * altura);
        }
};

//Triangulo é uma FormaGeometrica
class Triangulo : public FormaGeometrica{
    public:
        //Sobrescreve a Area() de FormaGeometrica
        int Area(){
            return (largura * altura)/2;
        }
};

int main(){

    Retangulo retangulo1;
    Triangulo triangulo1;

    retangulo1.setLargura(5);
    retangulo1.setAltura(10);

    triangulo1.setLargura(5);
    triangulo1.setAltura(10);

    cout<<"Area do retangulo: "<< retangulo1.Area() <<endl;
    cout<<"Area do triangulo: "<< triangulo1.Area() <<endl;

return 0;
}
