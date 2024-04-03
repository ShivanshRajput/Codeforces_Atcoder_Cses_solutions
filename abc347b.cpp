#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<string> st;
    int n = s.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            st.insert(s.substr(i,j+1));
        }
    }
    cout<<st.size();
}