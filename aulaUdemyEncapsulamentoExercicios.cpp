#include <iostream>

using namespace std;

class Celular{          //Definicão de "molde" para Pessoas;
    private:
        float price = 0.0;    //Atributo de preço
        string brand;   //Atributo de Marca

    public:             //modificador de acesso
        //Método Contrutor é inicializado do quando a classe é criado
        Celular(){
            brand = "";
            price = 0.0;
        }

        Celular(string newBrand){
            brand = newBrand;
        }

        Celular(int newPrice){
            price = newPrice;
        }

        Celular(string newBrand, float newPrice){
            brand = newBrand;
            price = newPrice;
        }

        //Getter do nome, retorna o nome atual
        float getPrice(){
            return price;
        }

        //Setter do price, atualiza o preço
        void setPrice(float newPrice){
            price = newPrice;
        }

        //Getter do nome, retorna o nome atual
        string getBrand(){
            return brand;
        }

        //Setter do nome, atualiza o nome
        void setBrand(string newBrand){
            brand = newBrand;
        }
};

int main(){
    Celular celular1;                               //Cria um objeto da classe Celular
    cout<< "Cell Marca: "<< celular1.getBrand();
    cout<< ", R$" << celular1.getPrice() <<endl;   //Exibe o resultado na tela

    cout<<"----"<<endl;

    Celular celular2("Motorola");                               //Cria um objeto da classe Celular
    cout<< "Cell Marca: "<< celular2.getBrand();
    cout<< ", R$" << celular2.getPrice() <<endl;   //Exibe o resultado na tela

    cout<<"----"<<endl;

    Celular celular3(899.9);                               //Cria um objeto da classe Celular
    cout<< "Cell Marca: "<< celular3.getBrand();
    cout<< ", R$" << celular3.getPrice() <<endl;   //Exibe o resultado na tela

    cout<<"----"<<endl;

    Celular celular4("Iphone",4369.99);                               //Cria um objeto da classe Celular
    cout<< "Cell Marca: "<< celular4.getBrand();
    cout<< ", R$" << celular4.getPrice() <<endl;   //Exibe o resultado na tela

    return 0;
}
