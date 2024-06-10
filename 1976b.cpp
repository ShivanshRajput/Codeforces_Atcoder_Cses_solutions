#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v1(n) , v2(n+1);
        for(long long i=0;i<n;i++){
            cin>>v1[i];
        }
        for(long long  i=0;i<n+1;i++){
            cin>>v2[i];
        }
        long long diff = LONG_LONG_MAX;
        long long last = v2[n];
        for(long long i=0;i<n;i++)ko{
            diff = min({abs(v1[i]-last), abs(v2[i]-last) , diff});
            if((v1[i]>=last and v2[i]<=last) or (v1[i]<=last and v2[i]>=last)){
                diff = 0;
            }
        }
        long long ans = 0;
        for(long long i=0;i<n;i++){
            ans+=abs(v1[i] - v2[i]);
        }
        cout<<ans+diff+1<<endl;

    }
}