
cout<<"\t----- Struct -----\n";

//criando uma struct.
 struct{
     int meuNum;//membros da struct  (int variable).
     string meuString;//membros (string variable).
}minhaStrutura,meuCarro1,meuCarro2;//multiplas variaveis de estrutura.

//Para acessar membros de uma estrutura, use a sintaxe de ponto ( .):
minhaStrutura.meuNum = 12;
minhaStrutura.meuString = "Ola Mundo!";

//Atribua dados aos membros de uma estrutura e imprima-os:
cout<<"Criando uma struct e atribuindo valores.\n"<<endl;
cout<<"imprimindo meu Numero atribuido: "<<minhaStrutura.meuNum<<endl;
cout<<"imprimindo minha string atribuida: "<<minhaStrutura.meuString<<endl;

//atribuindo valores a variavel de estrutura "meuCarro1" acessando os membros.
meuCarro1.meuNum = 1999;
meuCarro1.meuString = "Ferrari";

//atribuindo valores a variavel de estrutura "meuCarro1" acessando os membros.
meuCarro2.meuNum = 1998;
meuCarro2.meuString = "Corsa";


cout <<"\nUtilizando a variavel de Estrutura 'meuCarro1': "<<meuCarro1.meuNum << " " <<meuCarro1.meuString<<"\n";
cout <<"Utilizando a variavel de Estrutura 'meuCarro2': "<<meuCarro2.meuNum<< " " <<meuCarro2.meuString<<"\n";

cout<<"\t---------"<<endl;
cout<<"Criando outra struct:"<<endl;

struct carro{ //essa struct esta nomeada como "carro"

    string marca;
    string modelo;
    int ano;
};

//Para declarar uma variável que utiliza a estrutura,
//use o nome da estrutura como o tipo de dados da variável.
carro meucar1;

//atribuindo valores a variavelde estrutura meuCar2 e acessando os membros.
meucar1.marca = "BMW";
meucar1.modelo = "X1";
meucar1.ano = 2011;

carro meucar2;
//atribuindo valores a variavelde estrutura meuCar2 e acessando os membros.
meucar2.marca = "Fiat";
meucar2.modelo = "Uno";
meucar2.ano = 2002;

cout<<meucar1.marca<<" - "<<meucar1.modelo<<" - "<<meucar1.ano<<"\n";
cout<<meucar2.marca<<" - "<<meucar2.modelo<<" - "<<meucar2.ano<<"\n";
