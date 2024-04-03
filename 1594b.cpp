#include<iostream>
#include<cmath>
using namespace std;
const long long Mod= 1000000007;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        long long ans=0;
        long long i=1;
        while(k){
            if(k&1){
                ans= (ans + i)%Mod;
            }
            i=(i*n)%Mod;
            k>>=1;
        }
        cout<<ans<<endl;
    }
}

// 3
// 3 4
// 9
// 2 12
// 12
// 105 564
// 204306508