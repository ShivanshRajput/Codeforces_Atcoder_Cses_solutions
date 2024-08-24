#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long maxi = max({a,b,c});
        n -= 3*maxi - (a+b+c);
        if(n<0){
            cout<<"NO\n";
        }
        else{
            if(n%3==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}