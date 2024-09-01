#include <iostream>

using namespace std;

//Classe Pai
class Usuario{
    private:
        string name;
        string email;

    public:
        string getName(){return name;}
        void setName(string name){this->name = name;}
        string getEmail(){return email;}
        void setEmail(string email){this->email = email;}
};

//Classe filha
class Personagem : public Usuario{
    //Herda os métodos public e protected
    //de Mamifero e tambem de Animal
    private:
        int nivel;
    public:
        int getNivel(){return nivel;}
        void setNivel(int nivel){this->nivel = nivel;}

        //Métodos diferentes costumam necessitar
        //De comentários, a menis que o nome seja
        //Autoexplicativo
        void aumentaUmNivel(){
            nivel += 1;
            printf("Nivel aumentado %d",nivel);
        }
};


int main(){

//instanciando o obj cachorro1 da Classe Cachorro
Personagem personagem1;

//passando os valores
personagem1.setName("Marcelo");
personagem1.setEmail("Mcelo@gmail.com");
personagem1.setNivel(30);

//imprimindo os valores
cout<<"Nome de usuario: " <<personagem1.getName()<<endl;
cout<<"Email: " <<personagem1.getEmail()<<endl;
cout<<"Nivel atual: " <<personagem1.getNivel()<<endl;

//chamando o método
personagem1.aumentaUmNivel();

return 0;
}
