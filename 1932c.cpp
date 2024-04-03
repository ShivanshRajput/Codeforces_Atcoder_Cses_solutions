#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long arr[n];
        long long prod=1;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            prod=(prod*arr[i])%mod;
        }
        string cmd;
        cin>>cmd;
        cout<<prod%m<<" ";
        long long low=0 , high = n-1;
        for(long long i=0;i<n-1;i++){
            if(cmd[i]=='L'){
                prod/=arr[low];
                low++;
                cout<<prod%m<<" ";
            }
            else{
                prod/=arr[high];
                high--;
                cout<<prod%m<<" ";
            }
        }
        cout<<endl;
    }
}