#include<iostream>
using namespace std;
class employe{
    private:
    int a,b,c;
    public:
    int d,e,f;
    void sdata(int a1,int b1,int c1);
    void gdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
        cout<<"the value of f is "<<f<<endl;

    }

};

void employe :: sdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main(){
     //bharat.a = 21; as declared previously as private it will show error
    
    employe b ;
    
    b.d = 45;        
    b.e = 67;
    b.f = 34;  
    b.sdata(6,3,8);
    b.gdata();
    return 0;
    
}