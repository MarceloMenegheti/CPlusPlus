
//Funcao recursiva 
/*
10 + soma (9)
10 + ( 9 + soma (8) )
10 + ( 9 + ( 8 + soma (7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + soma(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
*/

int sum(int k){//parametro de 10.
    if(k>0){
        return k+sum(k-1);//10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 55
    }else{
        return 0;
    }
}


int main(){
    
//declarando 'result' e chamando a funcao sum(10) passando um argumentos de valor 10.
int result = sum(10);

//imprimindo.
cout<<"\nfuncao recursiva de 10: "<<result<<endl;

return 0;
}
