#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        set<long long>st;
        int n;
        cin>>n;
        for (int i=0;i<n;i++){
            long long x;
            cin>>x;
            st.insert(x);
        }
        vector<long long>v;
        for(auto it : st){
            v.push_back(it);
        }
        int p1=0;
        int p2=0;
        int ans=0;
        for( ; p2<v.size() ; p2++){
            while(v[p2]-v[p1]>n-1){
                p1++;
            }
            ans=max(ans , p2-p1+1);
        }
        cout<<ans<<endl;
    }
}