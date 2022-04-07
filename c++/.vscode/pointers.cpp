#include<iostream>
using namespace std;
// the pointer is the data type which holds the adress of the data types
int main(){
    int a= 4;
    int *b = &a;
    cout<<"the adress of a is"<<&a<<endl;
    cout<<"the adress of a is"<<b<<endl;
    //here the & represent the ADRESSS operator

    // here * represnt the (valuE at)derefrence operator
    cout<<"the value of adress of a is"<<*b<<endl;
    //pointer to poiter
    int ** l=&b;
    cout<<"the adress of b is"<<l<<endl;
    cout<<"the value of adress of b is"<<**l<<endl;
    return 0;
}