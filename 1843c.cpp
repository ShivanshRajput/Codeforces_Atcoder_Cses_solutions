#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long n;
        cin>>n;
        long long ans=0;
        while(n){
            ans+=n;
            n>>=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}