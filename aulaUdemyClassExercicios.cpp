#include <iostream>

using namespace std;

class Calculadora{                  //Definicão de "molde" para Pessoas;
    public:                         //modificador de acesso

        //Método Contrutor é inicializado do quando a classe é criado
        Calculadora(){
            printf("\nCalculadora criada (24 | 8)\n");
        }

        //Método que faz uma soma
        int soma(int x, int y){
            int resulatado = x + y;
            return resulatado;
        }

        //Método que faz uma subtracao
        int subtrai(int x, int y){
            int resulatado = x - y;
            return resulatado;
        }

        //Método que faz uma divisao
        int divisao(int x, int y){
            int resulatado = x / y;
            return resulatado;
        }

        //Método que faz uma multiplicacao
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
