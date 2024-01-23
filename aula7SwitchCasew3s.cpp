#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

int day;
cout<<"Informe um numero que corresponda a um dia da semana: ";
cin>>day;

switch(day){

case 1:
    cout<<"\n\nmonday - Segunda!\n\n";
    break;
case 2:
    cout<<"\n\ntuesday - Terca!\n\n";
    break;
case 3:
    cout<<"\n\nwednesday - Quarta!\n\n";
    break;
case 4:
    cout<<"\n\nthursday - Quinta!\n\n";
    break;
case 5:
    cout<<"\n\nfriday - Sexta!\n\n";
    break;
case 6:
    cout<<"\n\nsaturday - Sabado!\n\n";
    break;
case 7:
    cout<<"\n\nsunday - Domingo\n\n";
    break;
//caso nao digite um numero correspondente ou uma letra.
default:
    cout<<"\n\tCORNO!!\n\n";
}
return 0;
}