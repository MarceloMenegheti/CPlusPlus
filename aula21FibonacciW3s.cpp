//FIBONACCI

int fibonacci(int n){ //1,1,2,3,5,8,13,21......
    if(n==1||n==2){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main(){
//declarando valores
int i,k;

cout<<"informe o numero de fibunacci: ";
cin>>k;

cout<<"\nFibonacci com o valor "<<k<<" Resultado: ";

    for(i = 0; i < k; i++){
        cout<<fibonacci(i + 1)<<" ";
   }
    cout<<endl;

    return 0;
}