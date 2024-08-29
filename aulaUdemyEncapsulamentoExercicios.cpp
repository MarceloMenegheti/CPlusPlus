#include <iostream>

using namespace std;

class Salgadinho{           //Definic�o de "molde";
    private:                //modificador de acesso
        string sabor;       //Atributo de sabor

    public:
        //M�todo Contrutor � inicializado do quando a classe � criado
        Salgadinho(string sabor){
            setSabor(sabor);
        }

        //Getter do sabor, retorna o sabor
        string getSabor(){
            return sabor;
        }

        //Setter do sabor, atualiza o sabor
        void setSabor(string sabor){
            //atributo da classe recebe o valor do par�metro
            this->sabor = sabor;
        }
};

int main(){

    Salgadinho s("Picante");                                         //Cria um objeto da classe Celular
    cout<< "Salgadinho1 sabor:" << s.getSabor() <<endl;   //Exibe o resultado na tela

    return 0;
}
