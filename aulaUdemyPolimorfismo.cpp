#include <iostream>

using namespace std;

//Classe Pai
class Menu{
    public:
        //Método Virtual (Vazio)
        void mostrarOpcoes(){}
};

class MenuADM: public Menu{
    public:
        //Ao chamar saudar() num ingles
        //Esse é o método que será chamado
        void mostrarOpcoes(){
            cout<< "\n------ Menu Administrador"<<endl;
            cout<< "1 - Comprar"<<endl;
            cout<< "2 - Vender"<<endl;
            cout<< "3 - Cadastrar novo Produto"<<endl;
            cout<< "4 - Excluir Produto"<<endl;
            cout<< "5 - Estoque"<<endl;
            cout<< "6 - sair"<<endl;
        }
};

class MenuClient: public Menu{
    public:
        //Ao chamar emitirSom() num gato
        //Esse é o método que será chamado
        void mostrarOpcoes(){
            cout<< "\n------ Menu Cliente!!"<<endl;
            cout<< "1 - Cadastrar-se"<<endl;
            cout<< "2 - Comprar"<<endl;
            cout<< "3 - Vender"<<endl;
            cout<< "4 - Produtos"<<endl;
            cout<< "5 - sair"<<endl;
        }
};


int main(){

    MenuClient menuClient;
    menuClient.mostrarOpcoes();

    MenuADM menuADM;
    menuADM.mostrarOpcoes();

    return 0;
}
