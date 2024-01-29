
//criando uma struct sem nome
 struct{
     int meuNum;
     string meuString;
}minhaStrutura,meuCarro1,meuCarro2;//objetos da struct

//declarando meu obj "minhastrutura" pegando os atributos da struct
minhaStrutura.meuNum = 12;
minhaStrutura.meuString = "Ola Mundo!";
cout<<"Criando uma struct:"<<endl;
cout<<"Meu Numero : "<<minhaStrutura.meuNum<<"\n";
cout<<"Minha Estrutura : "<<minhaStrutura.meuString<<"\n";

//declarndo outro obj "meuCarro1" pegando os atributos para serem declarados.
meuCarro1.meuNum = 1999;
meuCarro1.meuString = "Ferrari";

//declarndo outro obj "meuCarro2" pegando os atributos para serem declarados.
meuCarro2.meuNum = 1998;
meuCarro2.meuString = "Corsa";


cout <<"\nUtilizando a Estrutura Carro1 :"<<meuCarro1.meuNum << " " <<meuCarro1.meuString<<"\n";
cout <<"Utilizando a Estrutura Carro1 :"<<meuCarro2.meuNum<< " " <<meuCarro2.meuString<<"\n";

cout<<"---------\n";
cout<<"Criando outra struct:"<<endl;

struct carro{
    string marca;
    string modelo;
    int ano;
};

carro meucar1;
meucar1.marca = "BMW";
meucar1.modelo = "X1";
meucar1.ano = 2011;

carro meucar2;
meucar2.marca = "Fiat";
meucar2.modelo = "Uno";
meucar2.ano = 2002;

cout<<meucar1.marca<<" - "<<meucar1.modelo<<" - "<<meucar1.ano<<"\n";
cout<<meucar2.marca<<" - "<<meucar2.modelo<<" - "<<meucar2.ano<<"\n";
