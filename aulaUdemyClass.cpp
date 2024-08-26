#include <iostream>
#include <ios>
#include<limits>

using namespace std;

class Cookie{           //Definicão de "molde" para Pessoas;
    public:             //modificador de acesso
        float preco;   //Atributo de preco
        string sabor;    //Atributo de Sabor
};

int main()
{
    Cookie cookie;     //Cria um Struct da classe Cookie

    cout<<"Digite o preco do cookie: ";
    cin>>cookie.preco;

    //limpar o buffer
    cin.sync();

    cout<<"Digite o sabor do cookie: ";

    //limpar o buffer
    cin.sync();

    //Lê o sabor mesmo que tenha espacos
    getline(cin, cookie.sabor);

    //Exibe o resultado na tela
    cout<<"\nCookie: "<<cookie.sabor<<" | Custa R$"<<cookie.preco<<endl;

    return 0;
}
