#include <iostream>

using namespace std;

class Calculadora{                  //Definicão de "molde" para Pessoas;
    public:                         //modificador de acesso

        //Método Contrutor é inicializado do quando a classe é criado
        Calculadora(){
            printf("\nCalculadora criada \n");
        }

        //Método que faz uma soma
        int soma(int x, int y){
            int resulatado = x + y;
            return resulatado;
        }
};

int main(){
    Calculadora minhaCalculadora;    //Instancia um obj da classe pessoa passando um parametro
    cout << minhaCalculadora.soma(24, 8)<<endl;
    cout << minhaCalculadora.soma(13, 82)<<endl;

    return 0;
}
