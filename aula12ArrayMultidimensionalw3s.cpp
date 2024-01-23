#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

cout<<"---------------------------------------\n";
//matrizes multidimensionais
string letters[2][4] = {
    //  [0]       [1]      [2]         [3]
    { "Abelha", "Bola", "Caderno", "Dinheiro" },//[0]
    { "Elefante", "Faca", "Geleia", "Hoje" }      //[1]
};
cout<<"imprimindo o array multidimensional \"letters[2][4]\": "<<endl;

//imprimindo o matriz
for(int i = 0; i<2; i++){
    for(int j = 0; j < 4; j++){
        cout<<"["<<i<<"]"<<"["<<j<<"]"<<" - "<<letters[i][j]<<endl;
    }
}
cout<<"\n---------------------------------------\n";
cout<<"imprimindo o valor na posicao e mudando."<<endl;
//mostrando o valor que esta armazenado na posicao[1][2]
cout<<"\"letters[1][2]\" = "<<letters[1][2]<<endl;

//mudando o valor.
letters[1][2] = "Morango";

//imprimindo o novo valor
cout<<"\"letters[1][2]\" = "<<letters[1][2]<<" \'apos a mudanca\' "<<endl;
cout<<"\n---------------------------------------\n";
cout<<"imprimindo o array multidimensional \"letters[2][4]\" apos a mudanca: "<<endl;
for ( int i = 0; i<2;i++){
    for(int j = 0;j<4;j++){
        cout<<"["<<i<<"]"<<"["<<j<<"]"<<" - "<<letters[i][j]<<endl;
    }
}

return 0;
}