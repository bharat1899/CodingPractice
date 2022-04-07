#include<iostream>
using namespace std;

int main(){
    int ages[] = {12,20,25,36,28,29};
    int classes[4];
    classes[0]=2345;
    classes[1]=134;
    classes[2]=345;
    classes[3]=3455;
    cout<<"the value of ages is"<<endl;
    cout<<ages[0]<<endl;
    cout<<ages[3]<<endl;
    cout<<ages[2]<<endl;
    //also wr can change the value of array
    ages[5]=678;
    cout<<ages[5]<<endl;
    cout<<"th value of classes are"<<endl;
    cout<<classes[0]<<endl;
    cout<<classes[1]<<endl;
    cout<<classes[2]<<endl;
    cout<<classes[3]<<endl;
    //we can also use for loops to make it easy
    for (int i = 0; i <= 4; i++)
    {
        /* code */
        cout<<"the value of ages "<<i<<" is "<<ages[i]<<endl;

    }

    //using while loop
    int i = 0;
    while(i<=4){
        cout<<"the value of ages "<<i<<" is "<<ages[i]<<endl;
        i++;

    }
    
    //using do while loop
    int c = 0;
    do{
        cout<<"the value of classes "<<c<<" is "<<classes[c]<<endl;
        c++;

    }while(c<3);


    //pointers used in this situation
    int*p = ages;
    cout<<"the value of ages *p is "<<*p<<endl;
    cout<<"the value of ages *(P+1)is "<<*(p+1)<<endl;
    cout<<"the value of ages *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of ages *(p+3)is "<<*(p+3)<<endl;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<<*(p+i)<<endl;
    }
    


    return 0;
}