#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

cout<<"\nlaco de repeticao com While"<<endl;
int i = 0;
//laco de repeticao while simples
while(i <9){
    cout<<i<<"\n";
    i++;
}

cout<<"\nlaco de repeticao com Do-While"<<endl;

//laco de repeticao com Do
int j = 0;
do{
    cout<<j<<"\n";
    j++;
}while(j<5);

return 0;
}