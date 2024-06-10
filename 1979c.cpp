#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}


int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
    
        long long tot = v[0];
        for(long long i=1;i<n;i++){
            tot = lcm(tot , v[i]);
        }
        long long sum = 0;
        vector<long long> ans;
        for(long long val:v){
            sum+=tot/val;
            ans.push_back(tot/val);
        }
        if(sum>=tot){
            cout<<-1<<endl;
            continue;
        }
        for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}