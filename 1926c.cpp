#include<bits/stdc++.h>
using namespace std;

int funct(int n, vector<int> &dp) {
    if (n < 10)
        return (n * (n + 1) / 2);
    int digits = log10(n);
    int p = ceil(pow(10, digits));
    int msd = n / p;
    return ((msd * dp[digits]) + ((msd * (msd - 1) / 2) * p) + msd * (1 + n % p) + funct(n % p, dp));
}

int sumUntill(int n) {
    int digits = log10(n);
    vector<int> dp(digits+1);
    dp[0] = 0;
    dp[1] = 45;
    for(int i = 2; i <= digits; i++)
        dp[i] = (dp[i-1] * 10) + (45*(int)(ceil(pow(10, i - 1))));

    return funct(n, dp);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<sumUntill(n)<<endl;
    }
}