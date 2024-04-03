#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search index of : ";
    int x;
    cin>>x;
    cout<<"Index of "<<x<< " : "<<linearSearch(arr , n , x);
}