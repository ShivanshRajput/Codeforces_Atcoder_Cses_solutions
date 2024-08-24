#include<bits/stdc++.h>
#include<bit>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string f="";
        f+=s[0];
        int n = s.size();
        bool flag = true;
        for(int i=1;i<n;i++){
            if(flag && s[i]==s[i-1]){
                char c = s[i];
                if(c=='a'){
                    c='z';
                }
                else{
                    c='a';
                }
                f+=c;
                flag = false;
            }
            f+=s[i];
        }
        if(flag){
            char c = s[n-1];
            if(c=='a'){
                c='z';
            }
            else{
                c='a';
            }
            f+=c;
        }
        cout<<f<<endl;
    }
}