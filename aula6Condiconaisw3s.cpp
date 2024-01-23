#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

//declarando variaveis
int myAge = 25;
int myage = 8;
int votingAge = 18;

//check na idade
cout<<"boolean number[ "<<(myAge <= votingAge)<<" ]"<<endl;
cout<<"boolean number[ "<<(myage <= votingAge)<<" ]\n"<<endl;


//condiconais primeiro bloco
if (myage >= votingAge){
    cout<<"Old enough to vote! sua idade eh: "<<myage<<endl;
}else{
    cout<<"Not old enough to vote. sua idade eh: "<<myage<<endl;
}


//condiconais segundo bloco
if(myAge >= votingAge){
    cout<<"Old enough to vote! sua idade eh: "<<myAge<<endl;
}else{
    cout<<"Not old enough to vote. sua idade eh: "<<myAge<<endl;
    }


int time = 20;//variavel

//condiconal de outra forma
// if( time < 18){cout<<"\nGood day"}
//else{cout<<"\nGood evening."}
string result = (time < 18)? "\nGood day\n" : "\nGood evening.\n";
cout<<result;

return 0;
}