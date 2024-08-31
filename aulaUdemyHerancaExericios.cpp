#include <iostream>

using namespace std;

//Classe Pai
class Animal{
    protected:
        string terreno;
    public:
        string getTerreno(){
            return terreno;
        }
        void setTerreno(string terreno){
            this->terreno = terreno;
        }
};

//Classe filha
class Mamifero: public Animal{
    private:
        int mesesGestacao;
    public:
        int getMesesGestacao(){
            return mesesGestacao;
        }
        void setMesesGestacao(int mesesGestacao){
            this->mesesGestacao = mesesGestacao;
        }
};

//Classe filha
class Cachorro : public Mamifero{
    //Herda os métodos public e protected
    //de Mamifero e tambem de Animal
    private:
        string raca;
    public:

        //um construtor
        Cachorro(){
            printf("\nCachorro criado!\n");
        }
        string getRaca(){
            return raca;
        }
        string setRaca(string raca){
            this->raca = raca;
        }

        //Método para latir
        void latir(){
            printf("AUu AUu!");
        }
};


int main(){

//instanciando o obj cachorro1 da Classe Cachorro
Cachorro cachorro1;

//passando os valores
cachorro1.setTerreno("Terra");
cachorro1.setMesesGestacao(4);
cachorro1.setRaca("Yorkshine");

//imprimindo os valores
cout<<cachorro1.getTerreno()<<endl;
cout<<cachorro1.getMesesGestacao()<<endl;
cout<<cachorro1.getRaca()<<endl;

//chamando o método
cachorro1.latir();

return 0;
}
