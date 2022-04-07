#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;

}
// we can use two same functions and c++ will take them seperately


int sum(int a,int b , int c){
    return a+b*c;

}
// volume of cyclinder

int volume(int r,int h){
    return 3.14*r*r*h;
}
//volume of a cube
int volume(int a){
    return (a*a*a);
}


int main(){
    cout<<"the sum of these number will be"<<sum(9,8)<<endl;
    cout<<"the sum of these two number will be "<<sum(9,8,4)<<endl;
    cout<<"the volume of cylinder having dimesions 4,5 is "<<volume(4,5)<<endl;
    cout<<"the volume of cube having dimesions 9 is "<<volume(9)<<endl;

    return 0;
}