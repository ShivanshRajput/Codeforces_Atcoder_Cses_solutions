#include<iostream>
using namespace std;

int getsum(int arr[] , int a , int b){
    if(a==0)
        return arr[b];
    return arr[b] - arr[a-1];
}

void preprocessing(int arr[] , int n){
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    preprocessing(arr , n);

    cout<<"getsum : ";
    int a,b;
    cin>>a>>b;
    cout<<getsum(arr , a,b);
}