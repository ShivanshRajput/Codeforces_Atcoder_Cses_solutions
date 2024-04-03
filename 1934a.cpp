#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end());
        int i=0,j=n-1,k=1,l=n-2;
        long long ans = abs(arr[i]-arr[j]) + abs(arr[j]-arr[k]) + abs(arr[k]-arr[l]) + abs(arr[l]-arr[i]);
        cout<<ans<<endl;
    }
}