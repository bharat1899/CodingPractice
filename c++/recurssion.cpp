#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);

}

int fib(int l){
    if(l<2){
        return 1;
    }

    return fib(l-2)+fib(l - 1);

}

int main(){
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;



    int b;
    cout<<"enter the number "<<endl;
    cin>>b;
    cout<<"the fibonacci value of "<<a<<" is "<<fib(a)<<endl;

    return 0;
}