#include <iostream>

using namespace std;

//Classe Pai
class Idioma{
    public:
        //Método Virtual (Vazio)
        void saudar(){}
};

class Ingles: public Idioma{
    public:
        //Ao chamar saudar() num ingles
        //Esse é o método que será chamado
        void suadar(){
            cout<< "Ingles: Hello my friend!"<<endl;
        }
};

class Espanhol: public Idioma{
    public:
        //Ao chamar emitirSom() num gato
        //Esse é o método que será chamado
        void suadar(){
            cout<< "Espanhol: Hola mi amigo"<<endl;
        }
};

class Japones: public Idioma{
    public:
        //Ao chamar emitirSom() num gato
        //Esse é o método que será chamado
        void suadar(){
            cout<< "Japones: Kon'nichiwa, tomoyo"<<endl;
        }
};

int main(){

    //O Método emitirSom() sobrepôe do Animal
    Ingles ingles1;
    ingles1.suadar();

    //O Método emitirSom() sobrepôe do Animal
    Espanhol espanhol_1;
    espanhol_1.suadar();

    //O Método emitirSom() sobrepôe do Animal
    Japones japones1;
    japones1.suadar();

    return 0;
}
