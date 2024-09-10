#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.front() != s.back()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}