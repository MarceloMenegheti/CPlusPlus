#include <iostream>

using namespace std;

class Salgadinho{           //Definicão de "molde";
    private:                //modificador de acesso
        string sabor;       //Atributo de sabor

    public:
        //Método Contrutor é inicializado do quando a classe é criado
        Salgadinho(string sabor){
            setSabor(sabor);
        }

        //Getter do sabor, retorna o sabor
        string getSabor(){
            return sabor;
        }

        //Setter do sabor, atualiza o sabor
        void setSabor(string sabor){
            //atributo da classe recebe o valor do parâmetro
            this->sabor = sabor;
        }
};

int main(){

    Salgadinho s("Picante");                                         //Cria um objeto da classe Celular
    cout<< "Salgadinho1 sabor:" << s.getSabor() <<endl;   //Exibe o resultado na tela

    return 0;
}
