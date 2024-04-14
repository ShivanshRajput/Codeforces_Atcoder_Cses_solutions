#include<iostream>
using namespace std;
int main(){
    string t;
    cin>>t;
    bool flag = false;
    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        if(s[0]==t[0] or s[1]==t[1]) flag = true;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
