#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

int main () {

    //cria o obj de arquivo
    ofstream arquivoDeSaida;


    //abre o arquivo de arquivo
    arquivoDeSaida.open("Texto.txt");

    arquivoDeSaida<<"Mamãnzinha";

    arquivoDeSaida.close();


    //dizer qual arquivo será lido
    ifstream input("Texto.txt");

    //String que recebera o texto lido
    string textoLido;

    //passa o texto arquivo para a string
    for(string line; getline(input,line);){
        textoLido += line;
    }

    //mostrar conteudo
    cout<<textoLido;

    //Esvazia o arquivo
    arquivoDeSaida << " "<<endl;

    //Fecha o arquivo
    arquivoDeSaida.close();

    arquivoDeSaida.open("Texto.txt");

    return 0;
}