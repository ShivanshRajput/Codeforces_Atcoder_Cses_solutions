#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        m = min(m,n);
        int col = n - ceil((n*1.0)/m);
        if(n==1 or m==1){
            cout<<"NO\n";
            continue;
        }
        if(k>=col){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}