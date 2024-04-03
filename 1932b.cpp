#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=arr[0];
        for(int i=1;i<n;i++){
            int newsum=arr[i];
            while(newsum<=sum){
                newsum+=arr[i];
            }
            sum=newsum;
        }
        cout<<sum<<endl;
    }
}