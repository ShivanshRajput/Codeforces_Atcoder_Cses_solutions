#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        int min=10;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){
                min=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==min){
                arr[i]++;
                break;
            }
        }
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=arr[i];
        }
        cout<<prod<<endl;
    }
}