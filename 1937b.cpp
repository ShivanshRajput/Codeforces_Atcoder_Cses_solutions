#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[2][n];
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        for(int i=0;i<n;i++){
            s[0][i]=s1[i];
            s[1][i]=s2[i];
        }
        int yind=0;
        char ans[n+1];
        ans[0] = s[0][0];
        int falls=0;
        for(int i=0;i<n;i++){
            if(i==n-1 and yind==0){
                ans[i+1]=s[1][i];
            }
            else if(yind==0){
                if(s[0][i+1]=='1' and s[1][i]=='0'){
                    ans[i+1] = '0';
                    yind=1; 
                } 
                else if(s[0][i+1]=='0' and s[1][i]=='1'){
                    ans[i+1]='0';
                    falls=0;
                }
                else if(s[0][i+1]=='1' and s[1][i]=='1'){
                    ans[i+1]='1';
                    falls++;
                }
                else{
                    ans[i+1]='0';
                    falls++;
                }
            }
            else{
                ans[i+1]=s[1][i];
            }
        }
        for(int i=0;i<n+1;i++){
            cout<<ans[i];
        }
        cout<<endl;
        cout<<falls+1<<endl;
    }
}