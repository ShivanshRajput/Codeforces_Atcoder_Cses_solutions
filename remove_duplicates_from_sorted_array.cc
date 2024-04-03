#include<iostream>
using namespace std;
int removeDuplicates(int arr[] , int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newSize=removeDuplicates(arr , n);
    cout<<"New Size : "<<newSize<<endl;
    for(int i=0; i<newSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}