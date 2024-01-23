#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){


//declarando variaveis
string firstName = "Marcelo";
string lastName = " Eduardo";
string txt = "ASDFGGHJJKLLÇ";//texto aleatorio


//".append()" Estende a string anexando caracteres adicionais
// no final do seu valor atual.
string fullName = firstName.append(lastName);

//imprimindo na tela
cout<<"nome do usuario: "<<fullName;

//".size()" verificando o tamanho da string
cout<<"\nO tamanho da variavel \"string txt\" eh: "<<txt.size()<<endl;

//mudando uma letra da string
string myString = "Hello";
cout<<"\nString normal: "<<myString;

//"[h][e][l][l][o]" -> [h][e][l][x][o]
myString[3] = 'x';
cout<<"\nString modificada: "<<myString<<endl;

string fullname;

//"getline()" Extrai caracteres e os armazena em fullname
cout<<"\nYour full name : ";
getline(cin,fullname);

//imprimindo
cout<<"Your Name is : "<< fullname<<endl;


return 0;
}