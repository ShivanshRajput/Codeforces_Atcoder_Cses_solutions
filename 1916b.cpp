#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long hcf=gcd(a,b);
        a/=hcf;
        b/=hcf;
        long long mx=max(a,b);
        long long mn=min(a,b);
        if(mn==1){
            cout<<mx*mx*hcf<<endl;
        }
        else{
            cout<<hcf*a*b<<endl;
        }
    }
}