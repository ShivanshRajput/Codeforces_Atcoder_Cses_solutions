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
        int x=2;
        while(x){
            int test[x]={0};
            for(int i=0;i<n;i++){
               test[arr[i]%x]=1;
            }
            int cnt=0;
            for(int i=0;i<x;i++){
                if(test[i]!=0){
                    cnt++;
                }
            }
            if(cnt==2){
                cout<<x<<endl;
                break;
            }
            else{
                x+=x-1;
            }
        }
    }
}