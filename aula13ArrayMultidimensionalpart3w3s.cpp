#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

cout<<"---------------------------------------"<<endl;
cout<<"\nAgora criamos um novo array multidimensional: ";
cout<<"\'newLetters[2][2][2]\'"<<endl;
string newLetters[2][2][2] = {
  {
    { "Elemento1", "Elemento2" },
    { "Elemento3", "Elemento4" }
  },
  {
    { "Elemento5", "Elemento6" },
    { "Elemento7", "Elemento8" }
  }
};

cout<<"imprimindo o array multidimensional [2][2][2]\n"<<endl;
for(int k = 0; k < 2; k++){
    for(int l = 0; l < 2; l++){
        for(int u = 0; u<2;u++){
            cout<<"["<<k<<"]"<<"["<<l<<"]"<<"["<<u<<"]"<<" - "<<newLetters[k][l][u]<<"\n";
        }
    }
}

cout<<"\n---------------------------------------"<<endl;
cout<<"\'newLetters[0][1][1]\' = "<<newLetters[0][1][1]<<endl;

//mudando o valor.
newLetters[0][1][1] = "Goiabada";
cout<<"\n apos a mudanca \n"<<endl;
cout<<"\"newLetters[0][1][1]\" = "<<newLetters[0][1][1]<<endl;

cout<<"\n---------------------------------------"<<endl;

for(int k = 0; k < 2; k++){
    for(int l = 0; l < 2; l++){
        for(int u = 0; u<2;u++){
            cout<<"["<<k<<"]"<<"["<<l<<"]"<<"["<<u<<"]"<<" - "<<newLetters[k][l][u]<<"\n";
        }
    }
}
cout<<"\n---------------------------------------"<<endl;


//imprimindo com novos valores
cout<<"usuario fazendo a busca no array\n"<<endl;

//fazendo busca
for(int k = 0; k < 2; k++){
    cout<<"informe o valor a ser add a ser buscado:";
    cin>>k;
    for(int l = 0; l < 2; l++){
        cout<<"informe o valor a ser add a ser buscado:";
        cin>>l;
        for(int u = 0; u<2;u++){
            cout<<"informe o valor a ser add a ser buscado: ";
            cin>>u;
            cout<<"["<<k<<"]"<<"["<<l<<"]"<<"["<<u<<"]"<<" - "<<newLetters[k][l][u]<<"\n";
        }
    }
}
cout<<"\n---------------------------------------"<<endl;

return 0;
}
