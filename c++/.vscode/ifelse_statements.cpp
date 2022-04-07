#include<iostream>
using namespace std;
//*************SELECTION CONTROL STRUCTURE:IF -ELSE -IF -ELSE
int main(){
    int age;
    cout<<"tell me ur age ";
    cin>>age;
    if(age<22){
        cout<<"you all cannot come to farewell party"<<endl;

    }
    else if(age<34 && age>24){
        cout<<"you are most welcome to the party"<<endl;

    }
    else if(age<45){
        cout<<"you will get premioum pass"<<endl;
    }
    else{

    
        cout<<"you will get special seat"<<endl;
    }

//**************SELECTION CONTROL STRUCTURE:SWITCH OPERATOR
switch (age)
{
case 24:
    cout<<"you are of 24 months"<<endl;
    break;
case 56:
    cout<<"you are 56 months old "<<endl;
    break;
case 2:
    cout<<"you are two months old"<<endl;
    break;       

default:
cout<<"you are unborn"<<endl;
    break;
}





    return 0;

}