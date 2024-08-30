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

    //Como está extendendo a classe Eletronico
    //Automaticamente temos acesso aos métodos e atributos
    //Que foram PUBLIC dela, como getBrand() e setBrand()

    private:
        int polegadas;

    public:
        //Criando um Construtor e chamando o método herdado da Classe Pai.
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

