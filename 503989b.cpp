#include<iostream>
#include<vector>
using namespace std;

long long mod=100000007;

long long ipow(long long base, long long exp)
{
    long long result = 1;
    for (;;)
    {
        if (exp & 1)
            result = (result *base)%mod;
        exp >>= 1;
        if (!exp)
            break;
        base = (base*base)%mod;
    }

    return result;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<long long>dp(n+1);
        dp[0]=c;
        dp[1]=ipow(c,2)-2;
        for(long long i=2;i<=n;i++){
            dp[i]=(dp[i-1]*c)%mod - dp[i-2];
        }
        cout<<dp[n-1]<<endl;
    }
}