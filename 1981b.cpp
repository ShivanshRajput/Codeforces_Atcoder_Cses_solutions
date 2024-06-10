#include<bits/stdc++.h>
#include<bit>
using namespace std;

long long bitwiseOrRange(long long L, long long R) {
    long long mask = 1;
    while ((L | mask) <= R) {
        mask <<= 1;
    }
    return R | (mask - 1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , m;
        cin>>n>>m;
        long long ans = bitwiseOrRange(max(0ll , n-m) , n+m);
        
        cout<<ans<<endl;
    }
}