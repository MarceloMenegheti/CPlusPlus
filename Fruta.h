
using namespace std;

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
};
