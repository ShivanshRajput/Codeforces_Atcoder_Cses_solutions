#include<iostream>
using namespace std;

void erase(int arr[] , int n , int x){
    int index=-1;
    for(int i=0;i<n;i++){
        if(index != -1){
            arr[i-1]=arr[i];
            arr[i]=0;
        }
        if(arr[i]==x){
            index=i;
        }
    }
}

void printarray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    erase(arr,n,x);
    printarray(arr , n);

    cin>>x;
    erase(arr,n,x);
    printarray(arr , n);
}