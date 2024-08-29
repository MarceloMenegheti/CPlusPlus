#include <iostream>
#include "Fruta.h"  //importa a classe Fruta

using namespace std;

int main(){

    Fruta fruta1;

    fruta1.setName("Uva");
    fruta1.setPrice(15.35);

    cout << "Fruta 1:" << fruta1.getName();
    cout << " custa R$" << fruta1.getPrice()<<endl;

    return 0;
}

/*using namespace std;

class Fruta{          //Definicão de "molde" para Pessoas;
    private:
        float price;    //Atributo de preço
        string name;   //Atributo de nome

    public:             //modificador de acesso
        float getPrice(){
            return price;
        }
        void setPrice(float newPrice){
            price = newPrice;
        }

        string getName(){
            return name;
        }

        void setName(string newName){
            name = newName;
        }
};*/
