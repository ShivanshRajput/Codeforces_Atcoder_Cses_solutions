#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long ans = (x^y);
        ans = (ans & (-ans));
        cout<<ans<<endl;
    }
}