#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public :
    void setdata(int c,int d){
        a = c;
        b = d;
    }
    void getdata(complex a1, complex a2){
        a = a1.a + a2.a;

        b = a1.b + a2.b;
    }
    
    void printdata(void){
        cout<<" the complex number is"<<a<<"+"<<b <<"i"<<endl;
    }


};

int main(){

     complex number,number1;
     number.setdata(2,4);
     number1.setdata(2,3);
     number.getdata(number1,number);
     number.printdata();
    
    return 0;
}