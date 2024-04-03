#include<iostream>
using namespace std;
void zeros_to_end(int arr[] , int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    zeros_to_end(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
