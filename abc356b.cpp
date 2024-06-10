#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> req(m);
    for(int i=0;i<m;i++){
        cin>>req[i];
    }
    vector<long long> gain(m , 0);
    while(n--){
        for(int i=0;i<m;i++){
            long long a;
            cin>>a;
            gain[i]+=a;
        }
    }
    bool flag = true;
    for(int i=0;i<m;i++){
        if(gain[i]<req[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}