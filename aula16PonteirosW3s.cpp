
/*
E por que é útil saber o endereço da memória?
Referências e ponteiros são importantes em C++, porque oferecem a capacidade de manipular
 os dados na memória do computador - o que pode reduzir o código e melhorar o desempenho .
*/

cout<<"-------- PONTEIROS e REFERENCIA ---------"<<endl;

 //declarando as strings e atribuindo valores
string comida = "Pizza";
string &refeicao = comida;// referenciando a 'comida'.

//imprimindo
cout<<"std comida: "<<comida<<"\tsaida normal"<<endl;
cout<<"std &refeicao: "<<refeicao<<"\tsaida msm que 'comida'"<<endl;

//Uma variável de referência é uma “referência”
//a uma variável existente e é criada com o &operador
cout<<"\n-- Referenciando & --\n";
cout<<"ex: &comida: "<<&comida<<"\tsaida Endereco de memoria"<<endl;
cout<<"ex: refeicao: "<<refeicao<<"\tsaida msm que 'comida'"<<endl;

/*  Quando usado na declaração (string* ptr), cria uma variável ponteiro .

    Quando não usado na declaração, atua como um operador de desreferência 
*/
cout<<"\n-- ponteiros * -- \n";
string food = "Lanche";// variavel std normal.
string* eat = &food;//saida 0x6dfed4.

cout<<food<<"\t-\tvariavel std normal."<<endl;
cout<<&food<<"\taponta para o Endereco de memoria da variavel 'food'"<<endl;

cout<<eat<<"\taponta para o Endereco de memoria da variavel 'food'"<<endl;

cout<<"\nO que Eu jantei?"<<endl;
cout<<"utilizando *eat: "<<*eat<<endl;

//atribuindo novo valor.
*eat = "Torta";//novo valor do ponteiro
cout<<"\nNova refeicao add:\n"<<"*eat: "<<*eat<<"\nfood: "<<food<<endl;//observe que isso também alterará o valor da variável original.

