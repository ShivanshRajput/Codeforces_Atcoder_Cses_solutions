#include<iostream>
using namespace std;

void frequencies(int arr[] ,int n){
    int j,freq=1;
    for(j=1;j<n;j++){
        if(arr[j]!=arr[j-1]){
            cout<<arr[j-1]<<"  "<<freq<<endl;
            freq=1;
        }
        else{
            freq++;
        }
    }
    cout<<arr[j-1]<<"  "<<freq<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequencies(arr , n);
}
