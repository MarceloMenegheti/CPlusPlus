#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

cout<<"\n---------------------------------------\n";

//criando um array
int myNumber[5] = {10,20,30,40,50};
cout<<"imprimindo o array \"myNumber[5]\""<<endl;

for(int i : myNumber){
    cout<<i<<endl;
}

//tamanho int -> 4bytes entao (5 elementos x 4 bytes) = 20
cout<<"\nO tamanho do Array \"myNumber[]\" do tipo Inteiro em Bytes: "<<sizeof(myNumber);
int getArrayLength = sizeof(myNumber)/sizeof(int);
cout<<"\nO tamanho real do Array \"myNumber[]\" : "<<getArrayLength<<endl;


cout<<"\n---------------------------------------\n";
//novo array[6] = [0][1][2][3][4][5]
cout<<"Novo Array[6]. \n";
int newNumber[6] = {3,4,5,6,7,8};

cout<<"\nO tamanho do array em bytes: "<<sizeof(newNumber);
cout<<"\nO tamanho do int em bytes: "<<sizeof(int)<<endl;
cout<<"\n";

//"sizeof(20bytes)"dividido/sizeof(4bytes) = 6.
for(int i = 0; i< sizeof(newNumber)/sizeof(int);i++){
    cout<<"Array["<<i<<"] = "<<newNumber[i]<<endl;
}

cout<<"\n---------------------------------------\n";


return 0;
}