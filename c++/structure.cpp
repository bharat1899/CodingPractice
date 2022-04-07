#include<iostream>
using namespace std;
// code for structure

// typedef is used to get a nickname of the function like compnie as cp
typedef struct compnie
{ int number;
  char name;
  float revenue;
  bool rising; 

}cp;
//union code data type
union workers{
  int worker;
  char code;
  float batch;

};




int main(){
  // enum code
  enum bharat{foddie,amazing,dashing };
  // from this we can get the value of the subjects we added in enum

    struct compnie sumo;
    union workers ramesh;
    ramesh.code = 'b';
    //ramesh.worker = 234;
    
    // in union we can only use one code as if we add another it will give different value

    sumo.number = 234;
    sumo.name = 'b';
    sumo.revenue = 123.3;
    sumo.rising = true;
    cout<<"the value is "<<sumo.rising<<endl;
    cout<<"the value is "<<sumo.number<<endl;
    cout<<"the value is "<<sumo.name<<endl;
    cout<<"the value is "<<sumo.revenue<<endl;
    cout<<"the value of union code is "<<ramesh.code<<endl;
    cout<<foddie<<endl;
    cout<<amazing<<endl;
    




    return 0;
}
