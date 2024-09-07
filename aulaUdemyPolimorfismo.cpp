#include <iostream>

using namespace std;

//Classe Pai
class Animal{
    public:
        //Método Virtual (Vazio)
        void emitirSom(){}
};

class Cachorro: public Animal{
    public:
        //Ao chamar emitirSom() num Cachorro
        //Esse é o método que será chamado
        void emitirSom(){
            cout<< "Au Au!"<<endl;
        }
};

class Gato: public Animal{
    public:
        //Ao chamar emitirSom() num gato
        //Esse é o método que será chamado
        void emitirSom(){
            cout<< "Miau Miau!"<<endl;
        }
};

int main(){

    //O Método emitirSom() sobrepôe do Animal
    Cachorro dog;
    dog.emitirSom();

    //O Método emitirSom() sobrepôe do Animal
    Gato cat;
    cat.emitirSom();

    return 0;
}
