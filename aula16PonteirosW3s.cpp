 ///PONTEIROS ------------------

 //declarando as strings e atribuindo valores
string comida = "Pizza";
string &refeicao = comida;

cout<<"\n-- Referenciando & --\n";
cout<<"ex: &comida: "<<&comida<<"\n";
cout<<"ex: refeicao: "<<refeicao;

string food = "Lanche";
string* eat = &food;

cout<<"\n\n-- ponteiros * -- \n";
cout<<food<<"\n";
cout<<&food<<"\n";

cout<<eat<<"\n";
cout<<"\nO q eu comi? \n";
cout<<*eat<<"\n";


*eat = "Torta";
cout<<"\nNova refeicao add:\n"<<*eat<<"\n"<<food<<endl;

