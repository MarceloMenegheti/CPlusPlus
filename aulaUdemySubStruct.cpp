#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

//sub-struct
typedef struct Data{
    int dia;
    int mes;
    int ano;
};

struct Aluno{
    int id;
    Data nascimento;
};

int main () {


    Aluno aluno1,aluno2,aluno3;
    int i,j,k,l;

    cout<<"informe o numero do RA do estudante: ";
    cin>>i;

    cout<<"informe o dia do nascimento: ";
    cin>>j;

    cout<<"informe o mes do nascimento: ";
    cin>>k;

    cout<<"informe o ano de nascimento: ";
    cin>>l;


    aluno1.id = i;
    aluno1.nascimento.dia = j;
    aluno1.nascimento.ano = l;
    aluno1.nascimento.mes = k;

    cout<<"\n----------------------------"<<endl;
    cout<<"informacoes sobre o aluno cadastrado"<<endl;
    cout<<"RA: "<<aluno1.id<<endl;
    cout<<"data "<<aluno1.nascimento.dia<<"/"<<aluno1.nascimento.mes<<"/"<<aluno1.nascimento.ano<<"\n"<<endl;


    return 0;
}
