#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<long long>arr(m);
        for(long long i=0;i<m;i++){
            cin>>arr[i];
        }
        string f;
        cin>>f;
        sort(f.begin() ,f.end());
        unordered_set<long long>st(arr.begin(),arr.end());
        long long j=0;
        for(long long i=0;i<n;i++){
            if(st.find(i+1)!=st.end()){
                s[i]=f[j];
                j++;
            }
        }
        // cout<<st.size()<<endl;
        cout<<s<<endl;
    }
}