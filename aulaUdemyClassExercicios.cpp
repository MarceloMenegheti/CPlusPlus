#include <iostream>

using namespace std;

class Calculadora{                  //Definic�o de "molde" para Pessoas;
    public:                         //modificador de acesso

        //M�todo Contrutor � inicializado do quando a classe � criado
        Calculadora(){
            printf("\nCalculadora criada \n");
        }

        //M�todo que faz uma soma
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
