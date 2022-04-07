#include<iostream>
using namespace std;

int binarySearch(int input[] , int n , int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(x==input[mid]){
            return mid;
        }else if(x<input[mid]){
            start = mid+1;
        }else{
            end = mid-1;
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
    cout<<binarySearch(input , n , x);
}