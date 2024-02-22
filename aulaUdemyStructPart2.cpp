#include <stdio.h>
#include <string.h>
#include <iostream>
#include <new>
using namespace std;

//Struct para frutas
struct Frutas{
    string cor;
    string nome;
};

int main () {

    //Criando um ponteiro para o struct criado
    Frutas *primeiraFruta = new Frutas;

    //modificando valores
    primeiraFruta->cor = "verde";
    primeiraFruta->nome = "limao";

     //Exibindo Valores
    cout<<"Fruta: "<<primeiraFruta->nome<<", Cor: "<<primeiraFruta->cor<<endl;

    //Criando uma lista de frutas
    Frutas *ponteiroListaDeFrutas = new Frutas[2];

    //modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Amarelo";
    ponteiroListaDeFrutas[1].nome = "Banana";

    //Percorrendo e exibingo
    for(int i = 0; i < 2; i++){
       cout<<"\nFruta: "<<ponteiroListaDeFrutas[i].nome<<", Cor:"<<ponteiroListaDeFrutas[i].cor;
    }
    cout<<"\n\n";


    return 0;
}
