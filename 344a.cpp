#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bitset<2>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]) ans++;
    }
    cout<<ans<<endl;
}