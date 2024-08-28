#include <iostream>

using namespace std;

class Calculadora{                  //Definic�o de "molde" para Pessoas;
    public:                         //modificador de acesso

        //M�todo Contrutor � inicializado do quando a classe � criado
        Calculadora(){
            printf("\nCalculadora criada (24 | 8)\n");
        }

        //M�todo que faz uma soma
        int soma(int x, int y){
            int resulatado = x + y;
            return resulatado;
        }

        //M�todo que faz uma subtracao
        int subtrai(int x, int y){
            int resulatado = x - y;
            return resulatado;
        }

        //M�todo que faz uma divisao
        int divisao(int x, int y){
            int resulatado = x / y;
            return resulatado;
        }

        //M�todo que faz uma multiplicacao
        int multiplicacao(int x, int y){
            int resulatado = x * y;
            return resulatado;
        }
};

int main(){
    Calculadora minhaCalculadora;    //Instancia um obj da classe pessoa passando um parametro
    cout << "Soma: " << minhaCalculadora.soma(24, 8)<<endl;
    cout << "Subtrai: " << minhaCalculadora.subtrai(24, 8)<<endl;
    cout << "Divide: " << minhaCalculadora.divisao(24, 8)<<endl;
    cout << "Multiplica: " << minhaCalculadora.multiplicacao(24, 8)<<endl;

    return 0;
}
