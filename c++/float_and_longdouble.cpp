#include<iostream>
using namespace std;
int main(){

    float d = 44.46f; //here we can add "f or F" in front of 44.46 to show float

    long double l = 44.46l;//here we can add "l OR L" in front of 44.46 to show long double
    cout<<"the value of float is "<<d<<endl<<" the value of long double is "<<l<<endl;
     /* also we can take the things as follows thes floats and long double come in "LITERALS"*/
     cout<<"the value of 44.46 is "<<sizeof(44.46)<<endl;
     cout<<"the value of 44.46f is"<<sizeof(44.46F)<<endl;
     cout<<"the value of 44.46F is"<<sizeof(44.46f)<<endl; 
     cout<<"the value of 44.46l is"<<sizeof(44.46l)<<endl; 
     cout<<"the value of 44.46L is"<<sizeof(44.46L)<<endl;
  
     
    //********************REFERENCE VARIABLES*******************************
    float z = 233;
    float & y = z;
    cout<<z<<endl;
    cout<<y<<endl;
    //**********************TYPE CASTING******************************
    int r = 45;
    float g = 45.567;
    cout<<"the value of r is "<<(float)r<<endl;
    cout<<"the value of int g is"<<int(g)<<endl;
    cout<<"the value of g is"<<float(g)<<endl;
    int k = float(g);
    cout<<"th value of r + g is "<<r+g<<endl;
    cout<<"th value of k + g is "<<r+k<<endl;

return 0;

}

