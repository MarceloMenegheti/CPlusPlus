//Bibliotecas necessarias para limpeza do buffer
#include <ios>
#include <limits>
#include <iostream>


using namespace std;

int main(){

    //Cria uma variavel para armazenar uma frase
    char frase[80];
    cout<< "Digite uma frase: ";

    //Quando vamos ler palavras e frases com o teclado
    //Alguns compiladores se perdem com valores na mémoria
    //Para garantir ser funcionamento sem "lixo" no Buffer
    cin.sync();

    //Lê a frase mesmo que tenha um espaço
    cin.getline(frase, 80);

    //Imprimi o resultado
    cout << "\nFrase: " << frase<<endl;

    //Lê de novo, apos limpar o buffer
    cin.sync();
    cin.getline(frase, 80);
    cout <<"\nNova frase: "<< frase<<endl;

    return 0;
}
