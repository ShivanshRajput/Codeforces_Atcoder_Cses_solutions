#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        bool test = true;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=3;i<n;i+=2){
            if(arr[i]%2 != arr[i-2]%2){
                test=false;
            }
        }
        for(int i=2;i<n;i+=2){
            if(arr[i]%2 != arr[i-2]%2){
                test=false;
            }
        }
        if(test){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}