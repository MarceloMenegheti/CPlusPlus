#include <iostream>

using namespace std;

//Classe Pai
class Eletronico{
    private:
        string brand;
    public:
        string getBrand(){
            return brand;
        }
        void setBrand(string brand){
            this->brand = brand;
        }
    protected:
        void souEletronico(){
            printf("\nSou eletronico!\n");
        }
};

//Classe filho
class Celular: public Eletronico {

    //Como est� extendendo a classe Eletronico
    //Automaticamente temos acesso aos m�todos e atributos
    //Que foram PUBLIC dela, como getBrand() e setBrand()

    private:
        int polegadas;

    public:
        //Criando um Construtor e chamando o m�todo herdado da Classe Pai.
        Celular(){
            souEletronico();
        }

        //Getter da Brand, retorna a marca
        int getPolegadas(){
            return polegadas;
        }

        //Setter da Brand, atualiza a marca
        void setPolegadas(int polegadas){
            this->polegadas = polegadas;
        }
};


int main(){
    Eletronico eletronico;

    eletronico.setBrand("Samsung");
    cout<< "Eletronico marca: "<< eletronico.getBrand();            //Imprimi a marca

    //N�o consigo usar os m�todos getPolegadas() ou setPolegadas() aqui
    //Pois esses m�todos est�o presentes APENAS na classe filha.

    cout<<"\n----";

    Celular celular;
    celular.setBrand("Iphone");
    celular.setPolegadas(5);

    cout<<"\nMarca do Celular: "<< celular.getBrand() <<endl;       //imprimi a marca
    cout<<"Polegadas do Celular: "<< celular.getPolegadas()<<endl;  //imprimi a polegada
return 0;
}
