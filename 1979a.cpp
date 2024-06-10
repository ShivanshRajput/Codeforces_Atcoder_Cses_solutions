#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = LONG_LONG_MAX;
        for(int i=0;i<n-1;i++){
            ans = min(ans , max(v[i] , v[i+1]));
        }
        cout<<ans-1<<endl;
    }
}