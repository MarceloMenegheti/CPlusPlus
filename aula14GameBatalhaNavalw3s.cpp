#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

//batalha naval 
bool navio[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 0, 1 }
};

//declarando variaveis
int acertos = 0;
int numerosDeTurnos = 0;

while(acertos<4){
    int linha,coluna;

    cout<<"selecione as cordenadas\n";
    cout<<"escolha a linha entre 0 e 3: ";
    cin>>linha;

    cout<<"escolha uma coluna entre 0 e 3: ";
    cin>>coluna;

    //cade vez que for true entra ex:.[0][1] = true
    if(navio[linha][coluna]){
        navio[linha][coluna] = 0;//zero para recomecar
        acertos++;// toda vez que acertar soma
        cout<<"\nAcertou!! "<<(4-acertos)<<" Navios restantes \n\n"<<endl;

    }else{
        cout<<"\nErrou!!\n"<<endl;
    }
    //contagem de turnos
    numerosDeTurnos++;
}

cout<<"Victoria!!\n"<<endl;
cout<<"Voce Venceu em \""<<numerosDeTurnos<<"\" Turnos\n\n";

return 0;
}