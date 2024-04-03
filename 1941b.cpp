#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        for(int i=0;i<n-2;i++){
            if(arr[i] >= 0){
                arr[i+1]-=arr[i]*2;
                arr[i+2]-=arr[i];
                arr[i]=0;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i]==0) count++;
            }
            if(count==n){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}