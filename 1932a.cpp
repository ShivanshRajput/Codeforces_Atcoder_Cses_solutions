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
        int coins=0;
        if(s[0]=='@') coins++;
        for(int i=1;i<n;i++){
            if(s[i]=='@') coins++;
            if(s[i]=='*' and s[i-1]=='*') break;
        }
        cout<<coins<<endl;
    }
}