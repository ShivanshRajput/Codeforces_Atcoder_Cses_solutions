#include<bits/stdc++.h>
#include<bit>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        char c = s[n-1];
        if(c=='z'){
            c='a';
        }
        else{
            c='z';
        }
        cout<<s<<c<<endl;
    }
}