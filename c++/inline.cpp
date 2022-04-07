#include<iostream>
using namespace std;
//int inline product(int a , int b){........here inline is used to reduce the process
int product(int a , int b){ 
    static int c = 0;// here the static function reprsent that it is used only one time
    c = c+1;// and it is used multiple times
    return a*b+c ;

}

float bank(int deposit,float intrest= 1.04){
return deposit*intrest;
}


int main(){
    int a,b;
    int money;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"enter the value of ur amount"<<endl;
    cin>>money;
    cout<<"when u will deposit ur amonut "<<money<<endl<<"then u will get the intrested amount is"<<bank(money)<<endl;

    cout<<"when u will deposit ur amonut and u are vip member "<<money<<endl<<"then u will get the intrested amount is"<<bank(money,1.5)<<endl;
   

    return 0;
}