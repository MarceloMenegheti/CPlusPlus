#include <iostream>

using namespace std;

//Classe Pai
class Animal{
    public:
        //M�todo Virtual (Vazio)
        void emitirSom(){}
};

class Cachorro: public Animal{
    public:
        //Ao chamar emitirSom() num Cachorro
        //Esse � o m�todo que ser� chamado
        void emitirSom(){
            cout<< "Au Au!"<<endl;
        }
};

class Gato: public Animal{
    public:
        //Ao chamar emitirSom() num gato
        //Esse � o m�todo que ser� chamado
        void emitirSom(){
            cout<< "Miau Miau!"<<endl;
        }
};

int main(){

    //O M�todo emitirSom() sobrep�e do Animal
    Cachorro dog;
    dog.emitirSom();

    //O M�todo emitirSom() sobrep�e do Animal
    Gato cat;
    cat.emitirSom();

    return 0;
}
