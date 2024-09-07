#include <iostream>

using namespace std;

//Classe Pai
class Idioma{
    public:
        //M�todo Virtual (Vazio)
        void saudar(){}
};

class Ingles: public Idioma{
    public:
        //Ao chamar saudar() num ingles
        //Esse � o m�todo que ser� chamado
        void suadar(){
            cout<< "Ingles: Hello my friend!"<<endl;
        }
};

class Espanhol: public Idioma{
    public:
        //Ao chamar emitirSom() num gato
        //Esse � o m�todo que ser� chamado
        void suadar(){
            cout<< "Espanhol: Hola mi amigo"<<endl;
        }
};

class Japones: public Idioma{
    public:
        //Ao chamar emitirSom() num gato
        //Esse � o m�todo que ser� chamado
        void suadar(){
            cout<< "Japones: Kon'nichiwa, tomoyo"<<endl;
        }
};

int main(){

    //O M�todo emitirSom() sobrep�e do Animal
    Ingles ingles1;
    ingles1.suadar();

    //O M�todo emitirSom() sobrep�e do Animal
    Espanhol espanhol_1;
    espanhol_1.suadar();

    //O M�todo emitirSom() sobrep�e do Animal
    Japones japones1;
    japones1.suadar();

    return 0;
}
