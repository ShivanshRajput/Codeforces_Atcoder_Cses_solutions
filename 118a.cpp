#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='y' 
       and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U' and s[i]!='Y'){
            if(s[i]>='A' and s[i]<='Z'){
                ans= ans + "." + char(s[i] + ' ');
            }
            else{
                ans= ans + "." + s[i];
            }
        }
    }
    cout<<ans<<endl;
}