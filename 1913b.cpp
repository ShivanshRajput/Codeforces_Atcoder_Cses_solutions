#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long c0=0 , c1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }
        if(c0==c1){
            cout<<0<<endl;
        }
        else{
            int index=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='0'){
                    c1--;
                }
                else{
                    c0--;
                }
                if(c1==0  || c0==0){
                    index=i;
                }
            }
            cout<<s.size()-index-1<<endl;
        }
    }
}