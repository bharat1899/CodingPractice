#include<iostream>
 using namespace std;
 int c = 234;

 int main(){
     int a,b,c,d;
     cout<<"the value of a is "<<endl;
    
     cin>>a;
     cout<<"the value of b is ";
     cin>>b;
     cout<<"the value of c is ";
     cin>>c;
     d = a * b;
     cout<<"the sum of a and b is"<<d<<endl;
    b = a+c;
    cout<<"the value of b is "<<b<<endl;
    //also we can add here the value of global variable that is int c= 234 by using ::
    cout<<"the value of c is "<<::c;

     return 0;
 }