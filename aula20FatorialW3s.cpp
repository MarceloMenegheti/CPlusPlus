//FATORIAL

int fatorial(int x){
    if(x==0){
        return 1;
    }
    return x*fatorial(x-1); //4! = 4*3*2*1 = 24
}

int main(){

int f;

cout<<"\n\tInforme um numero para a funcao fatorial: ";
cin>>f;

cout<<"\tFatorial de "<<f <<" eh :"<<fatorial(f)<<endl;

return 0;
}
