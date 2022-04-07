#include<iostream>
using namespace std;
//int product(int a, int b){
//  int c = a*b;
// return c;}
// if we comment out this code and put it down the main code then it will show error
// so to use that function we use FUNCTION PROTOTYPE
int product (int a, int b);


int main(){
    int num1 ,num2;
    cout<<"enter the value "<<endl;
    cin>>num1;
    cout<<"enter the value "<<endl;
    cin>>num2;
    cout<<"the product of these numbers is"<<product(num1,num2);
    

    
    return 0;

}
int product(int a, int b){
    int c = a*b;
    return c;
}