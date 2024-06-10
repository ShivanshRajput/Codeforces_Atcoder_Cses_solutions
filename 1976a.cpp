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
        string t = s;
        sort(t.begin(), t.end());
        if(t==s){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}