
//FUNCOES
/*Uma função é um bloco de código que só é executado quando é chamado.
Você pode passar dados, conhecidos como parâmetros, para uma função.
Funções são usadas para realizar determinadas ações e são importantes
para reutilizar código: Defina o código uma vez e use-o várias vezes.

//declaracao Funcao
void myFunction() { // declaracao
   O corpo da funcao (Definicao)
}*/

//éfname um parâmetro
void meuFuncao(string fnome, int idade){//Quando um parâmetro é passado para a função, ele é chamado de argumento
cout<<"Eu acabei de ser executado! "<<fnome<<" Menegheti : "<<idade<<" Anos."<<endl;
}
void funcaoPais(string pais = "Brasil - valor padrao."){
cout<<" - "<<pais<<endl;
}
int funcaoNum(int x){// Os parâmetros atuam como variáveis ​​dentro da função.
    return 5+x;
}
void funcaoTroca(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
void funcaoArray(int meuArray[5]){
    for(int i = 0; i <5; i++){
        cout<<" posicao que estou ["<<i<<"] Meu valor: "<<meuArray[i]<<"\n";
    }
}
int funcPlus(int x, int y){
return x + y;
}
double funcPlus( double x, double y){
    return x + y;
}

int main(){
cout<<"\n\t----- FUNCOES -----"<<endl;
cout<<"meuFuncao():"<<endl;
meuFuncao(" Marcelo", 24);//chamando a funcao e passando argumentos.
meuFuncao(" Diego", 28);//chamando a funcao e passando argumentos.
meuFuncao(" Maria", 82);//chamando a funcao e passando argumentos.

cout<<"\nfuncaoPais():"<<endl;
funcaoPais("Argentina");//chamando outra e passando argumentos.
funcaoPais("India");
funcaoPais();//Se chamarmos a função sem argumento, ela usará o valor padrão ("Brasil"):
funcaoPais("USA");

cout<<"\nfuncaoNum(5)\no resultado: "<<funcaoNum(5)<<endl;//chamando a func e passando o args = 5.

cout<<"\nfuncaoTroca():"<<endl;
int primeiroNum = 10;
int segundoNum  = 20;
cout<<"PrimeiroNum = "<<primeiroNum<<"\t- "<<"   SegundoNum = "<<segundoNum<<endl;

funcaoTroca(primeiroNum,segundoNum);
cout<<"\tDepois da Troca os valores serao: \nPrimeiroNum = "<<primeiroNum<<"\t- "<<"   SegundoNum = "<<segundoNum<<"\n\n";

cout<<"\tfuncao array[5]: "<<endl;
int meuArray[5] = {10,24,34,56,7};
funcaoArray(meuArray);

int n1 = funcPlus(9,2);
double n2 = funcPlus(4.55,6.94);

cout<<"\nfuncaoPlus():"<<endl;
cout<<" Int: "<<n1<<endl;
cout<<" Double: "<<n2<<endl;

return 0;
}