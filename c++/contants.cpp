#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a= 34;
    int d =345;
    int b = 363656;
    cout<<"value of a is"<<a<<endl;
    // here we can use "const" for assigning the first value for not changing it further like:
    //int const b = 23;
    //b = 34;
    cout<<"value of b is"<<d<<endl;
    cout<<"value of b is"<<b <<endl;
   

    cout<<"value of b is"<<setw(6)<<a <<endl;
    cout<<"value of b is"<<setw(6)<<d <<endl;
    cout<<"value of b is"<<setw(6)<<b <<endl;



    int s = 10;
    int l = 5;
    int k = (((s/2)*6)-l)+5;
    cout<<k;










    return 0;


}
