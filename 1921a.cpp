#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>>v(4);
        for(int i=0;i<4;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin() , v.end());
        int a=abs(v[2].first-v[0].first);
        int b=abs(v[1].second-v[0].second);
        cout<<a*b<<endl;
    }
}