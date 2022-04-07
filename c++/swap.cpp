#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a+b;
    return c;

}

//void swap(int a, int b){
  //  int temp = a;
    //a = b;
    //b = temp;
//} this code will not swap a and b

// call by reference by pointers
//void swappointer(int*a , int*b){
//  int temp = *a;
//*a = *b;
//*b = temp;
//}

int& swapreferencevar(int&a , int&b){
    int temp = a;
    a = b;
    b = temp;
    return  a;

}

int main(){
    int d = 23;
    int n = 45;
    
    cout<<"the value of d is "<<d<<" and the value of n is "<<n<<" and the sum of these are "<<sum(d,n)<<endl;
    swapreferencevar(d,n) = 876;
    cout<<"the value of d is "<<d<<" and the value of n is "<<n<<" and the sum of these are "<<sum(d,n)<<endl;

    
    return 0;
}