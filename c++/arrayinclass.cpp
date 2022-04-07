#include <iostream>
using namespace std;
class employe
{
    int id;
    int salary;

public:
    void setid(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
    }
    void getid(void)
    {

        cout << "ur id is " << id << endl;
    }
    void setsalary(void){
        cout<<"salary of "<< id <<" is"<<endl;
        cin>>salary;
    }
        void getsalary(void){
            cout<<"so the salary of "<<id<<" is "<<salary<<endl;
        }

    
    
};

int main()
{
    employe bharat[100];
    for (int i = 0; i < 5; i++)
    {
        bharat[i].setid();
        bharat[i].getid();
        bharat[i].setsalary();
        bharat[i].getsalary();

    }

    return 0;
}