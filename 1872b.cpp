#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;   // traps
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int k=v[0].first;
        for (int i=0;i<n-1;){
            if (v[i+1].first<=(v[i].first+(v[i].second-1)/2)){
                i++;
                k=v[i].first;
            }
            else{

            }
        }
    }
}