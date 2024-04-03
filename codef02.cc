#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag;
        if(n==2){
            cout<<"YES\n";
            continue;
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]%2!=arr[i+2]%2){
                flag=false;
                break;
            }
            flag=true;
        }
        if(flag==false){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}