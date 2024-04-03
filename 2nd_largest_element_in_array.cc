#include<iostream>
using namespace std;
int second_largest_element(int arr[] , int n){
    int first=arr[0];
    int second=0;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}

int largest_element(int arr[] , int n){
    int first=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            first=arr[i];
        }
    }
    return first;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<second_largest_element(arr,n)<<endl;
    cout<<largest_element(arr,n)<<endl;
}