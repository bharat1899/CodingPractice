/*there are two types of the hedder files 
1. system hedder file: which comes with compiler
like #include <iostream>*/


// 2. user defines hedder files : which is written by the programmer.
// #include"raw.h"  -> this will produce an erroe if this file is not present in current dirctories





# include<iostream>
using namespace std;
int main(){
    cout<<"operators in c++:"<<endl;
//here we  can get new line by endl rather than using \n  ";
int a= 5, b= 6;
cout<<"these are the arithmatic operators"

cout<<"the value of a+b is"<<a+b <<endl;
cout<<"the value of a-b is"<<a-b <<endl;
cout<<"the value of a/b is"<<a/b <<endl;
cout<<"the value of a%b is"<<a%b <<endl;
cout<<"the value of a*b is"<<a*b <<endl;
cout<<"the value of a++ is"<<a++ <<endl;
cout<<"the value of a-- is"<<a-- <<endl;
cout<<"the value of ++a is"<<++a <<endl;
cout<<"the value of --a is"<<--a <<endl;
cout<<endl;

//assignment operators are like
// int b = 24
// char a = "b"


// comparision operators
 cout<<"following are the comaprision operator in c++"<<endl;
 cout<<"the value of a==b is "<<(a==b)<<endl;
 cout<<"the value of a!=b is "<<(a!=b)<<endl;
 cout<<"the value of a>=b is "<<(a>=b)<<endl;
 cout<<"the value of a<=b is "<<(a<=b)<<endl;
 cout<<"the value of a>b is "<<(a>b)<<endl;
 cout<<"the value of a<b is "<<(a<b)<<endl;

 



// logical operators

cout<<"following are the logical operator in c++"<<endl;
cout<<"the value of logical and operator is "<<((a!=b) && (a<b))<<endl; 
cout<<"the value of logical or operator is "<<((a==b) || (a<b))<<endl; 
cout<<"the value of logical not operator is "<<(!(a==b))<<endl; 
// not operator is like a negation 


 
 
 




    return 0;

}
