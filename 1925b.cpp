#include<iostream>
#include<set>
using namespace std;
void solve(){
    long long x,n;
    cin>>x>>n;
    long long div=x/n;
    set<long long> s;
    for(long long i=1;i*i<=x;i++){
        if(x%i==0){
            s.insert(i);
            s.insert(x/i);
        }
    }
    set<long long>::iterator it = s.lower_bound(div);
    if((*it)>div) it--;
    cout<<(*it)<<endl;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}