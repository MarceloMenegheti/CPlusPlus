#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

/*
Matrizes/arrays são usadas para armazenar vários
valores em uma única variável, em vez de declarar variáveis ​​
separadas para cada valor.
*/

//declarando a array.
string cars[4] ={"Volvo","Ford","Fiat","Ferrari"};

//imprimindo cada valor na array.
for(int i = 0;i<4;i++){
    cout<<"strings cars ["<<i<<"] = "<<cars[i]<<"\n";
}

//declarando outro array int.
int myNumber[6] = {1,2,3,4,5,6};
cout<<"\nArray do tipo int : "<<endl;
for(int i : myNumber){
    cout<<"M[ "<<i<<" ]"<<endl;
}

cout<<"\nValores addicionados a array \"carrs[5]\": "<<endl;
string carrs[5]={"carro1","carro2","carro3","carro4","carro5"};
for(int i = 0; i < 5; i++) {
    cout <<"["<<i<<"]"<<carrs[i]<<endl;
  }

cout<<"\nNovos Valores addicionados a array \"carrs[5]\": "<<endl;
carrs[0]= "Fusca";
carrs[1]= "Gol_Quadrado";
carrs[2]= "Gol_Redondo";
carrs[3]= "Fusca_Novo";
carrs[4]= "Uno_Quadrado";
 for(int i = 0; i < 5; i++) {
    cout <<"["<<i<<"]"<<carrs[i]<<endl;
  }

return 0;
}