#include <iostream>

using namespace std;

//Classe Pai
class Pessoa{
    private:
        string name;
        string cpf;

    public:
        string getName(){return name;}
        void setName(string name){this->name = name;}
        string getCpf(){return cpf;}
        void setCpf(string cpf){this->cpf = cpf;}
};

//Classe filha
class Professor : public Pessoa{
    //Herda os métodos public e protected

    private:
        float salary;
    public:
        float getSalary(){return salary;}
        void setSalary(float salary){this->salary = salary;}

        //construtores
        Professor(){}

        Professor(float salary, string name, string cpf){
            setSalary(salary);
            setName(name);
            setCpf(cpf);
        }
};


int main(){

//instanciando o obj pessoa da Classe Pessoa
Pessoa pessoa1;

//passando os valores
pessoa1.setName("Luiz");
pessoa1.setCpf("19121123-12");

//imprimindo os valores
cout<<"Nome: " <<pessoa1.getName()<<endl;
cout<<"CPF: " <<pessoa1.getCpf()<<endl;

cout<<"\n-----\n";

//instanciando o obj pfs da Classe Professor passando os valores
Professor pf1(2988.48,"Marcelo","43321123-12");

//imprimindo os valores
cout<<"Nome: " <<pf1.getName()<<endl;
cout<<"CPF: " <<pf1.getCpf()<<endl;
cout<<"Salario: R$" <<pf1.getSalary()<<endl;

cout<<"\n-----\n";

//instanciando o obj pfs da Classe Professor
Professor pf2;

//passando os valores
pf2.setName("John");
pf2.setCpf("43300000-32");
pf2.setSalary(4320.01);

//imprimindo os valores
cout<<"Nome: " <<pf2.getName()<<endl;
cout<<"CPF: " <<pf2.getCpf()<<endl;
cout<<"Salario: R$" <<pf2.getSalary()<<endl;

return 0;
}
