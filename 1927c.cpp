#include<iostream>
#include<algorithm>
#include<numeric>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_set<int> m1 , m2;
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                m1.insert(x);
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x<=k){
                m2.insert(x);
            }
        }
        if(m1.size()<k/2 or m2.size()<k/2){
            cout<<"NO\n";
        }
        else{
            unordered_set<int>mn;
            bool flag=true;
            for(auto &i:m1){
                mn.insert(i);
            }
            for(auto &i:m2){
                mn.insert(i);
            }
            vector<int>v;
            for(auto &x:mn)
            {
                v.push_back(x);
            }
            flag=(v.size()==k);
            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        
    }

}