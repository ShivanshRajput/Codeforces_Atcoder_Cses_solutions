#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_multiset<int> st;
        vector<int> v;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            v.push_back((c));
            st.insert(c);
        }
        int minus=0;
        for(int i=0;i<n;i++){
            if(st.find(2147483647 - (v[i])) != st.end()){
                minus++;
                st.erase(st.find(2147483647 - (v[i])));
            }
        }
        cout<<n-(minus/2)<<endl;
    }
}