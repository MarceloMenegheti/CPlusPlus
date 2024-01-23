#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

//operacoes math
int sum1 = 100 + 50;
int sum2 = sum1 + 250;
int sum3 = sum2 + sum2;

cout<<"O valor da primeira operacao: "<<sum1<<endl;
cout<<"O valor da segunda operacao: "<<sum2<<endl;
cout<<"O valor do terceiro: "<<sum3<<endl;

//declarando variaveis
int x= 7;
int y = 6;
cout<<"\nBoolean[ "<<(!(x > 6 && x >10))<<" ] "<<endl;//NOT logical
cout<<"\nBoolean[ "<<(x > 6 && x >10)<<" ] "<<endl;//AND logical
cout<<"\nBoolean[ "<<(x > 6 || x >10)<<" ] "<<endl;//OR logical


return 0;
}