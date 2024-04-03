#include<iostream>
#include<string>
using namespace std;

void minConsecutiveFlips(string arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"from "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<n-1<<endl;
    }
}


int main(){
    
    string arr;
    cin>>arr;
    minConsecutiveFlips(arr);
}