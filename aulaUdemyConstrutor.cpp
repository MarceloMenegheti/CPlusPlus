#include <iostream>
#include <ios>
#include<limits>

using namespace std;

class Cookie{           //Definic�o de "molde" para Pessoas;
    public:             //modificador de acesso
        float preco;    //Atributo de preco
        string sabor;   //Atributo de Sabor
        string formato; //Atributo de formato

        //M�todo Contrutor � inicializado do quando a class � criado
        Cookie(){
            cout<<"Cookie criado"<<endl;
            formato="Redondo";      //J� inicializa o formato como redondo
        }
};

int main()
{
    Cookie cookie;                  //Cria um Struct da classe Cookie

    cookie.preco = 15.35;           //Muda o pre�o do cookie
    cookie.sabor = "Chocolate";     //Muda o sabor do cookie

    //Exibe o resultado na tela
    cout<<"Cookie: "<<cookie.sabor<<" - Custa R$"<<cookie.preco<<", Formato: "<<cookie.formato<<endl;

    Cookie cookie2;                 //Cria um Struct da classe Cookie

    cookie2.preco = 9.51;           //Muda o pre�o do cookie
    cookie2.sabor = "Caramelo";     //Muda o sabor do cookie
    cookie2.formato = "Triangulo";  //Muda o formato do cookie

    //Exibe o resultado na tela
    cout<<"Cookie2: "<<cookie2.sabor<<" - Custa R$"<<cookie2.preco<<", Formato: "<<cookie2.formato<<endl;

    return 0;
}
