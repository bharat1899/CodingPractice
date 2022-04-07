#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<10;i++){
       
        if(i==9876){
            break;
        }
        //while to exclude any value we use continue at he place of break
        if(i==3){
            continue;
        }
    cout<<i<<endl;

    }
    return 0;
}