#include<iostream>
using namespace std;

int linearSearch(int input[] , int n , int x){
    for(int i=0 ; i<n ; i++){
        if(input[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
        int n;
        cin>>n;
        int input[n];
        for(int i=0 ; i<n ; i++){
            cin>>input[i];
        }
        int x;
        cin>>x;
        cout<<linearSearch(input , n , x);
}