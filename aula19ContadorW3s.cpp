// CONTADOR 

void contador(int numero,int cont=0){//passando um parametro de valor 24, e add um contador.
    cout<<"contagem: "<<cont<<endl;//comecando do zero.

    if(numero>cont){//vai ate o numero 24.
        contador(numero,++cont);//chama novamente a propria funcao e soma no contador.
    }
}

int main(){

contador(24);//chamando a funcao contador e passando um arg de valor 24.

return 0;
}