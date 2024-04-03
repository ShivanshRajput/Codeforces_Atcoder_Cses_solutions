#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        while(n--){
            long long c;
            cin>>c;
            ans+=c;
        }
        long long g=sqrtl(ans);
        if(g*g==ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}