#include<iostream>
using namespace std;
int main(){
   // it is for loop 
    for(int i = 0; i<=100;i++)
    {
        cout<<i<<endl;
    }
    //it is while loop
    int b = 1;
    while (b<=90)
    {
        cout<<b<<endl;
        b++;
    }
     

    // it is do while loop
    int c = 6,d=1;
    
    do{
        cout<<c*d<<endl;
        d++;

    }while(d<=10);


    // table of any nmber in for loop
     
    int n;
    cin>>n;
    for(int t=1;t<=10;t++ )
    {
        
        cout<<"the table of given input is "<<n*t<<endl;
        
    }
 // table of any input in while loop
 int l= 1,m;
 cin>>m;
 
 while (l<=10)
 {
     /* code */
     cout<<m*l<<endl;
     l++;
 }
 


    return 0;
}