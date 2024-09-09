#include<iostream>

using namespace std;

class Funcionario{
    public:
        virtual void ImprimirFuncoes() = 0; //Funçao Virtual = será sobrescrita
};

class Promotor : public Funcionario{
    public:
        //Sobrescreve a Area() de FormaGeometrica
        void ImprimirFuncoes(){
            cout<< "Funcoes Promotor: "<<endl;
            cout<< "Oganizar Produtos nas Prateleiras"<<endl;
        }
};

//Triangulo é uma FormaGeometrica
class Caixa : public Funcionario{
    public:
        //Sobrescreve a Area() de FormaGeometrica
        void ImprimirFuncoes(){
            cout<< "Funcoes Caixa: "<<endl;
            cout<< "Passar Produtos no Leitor e";
            cout<< " Cobrar com a Maquina de Cartao"<<endl;
        }
};

int main(){

    Promotor p1;
    Caixa c1;

    p1.ImprimirFuncoes();
    cout<<endl;
    c1.ImprimirFuncoes();

return 0;
}
