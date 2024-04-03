#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string f;
        cin>>f;
        int cnt=0 , szeros=0 ,sones=0 ,fzeros=0 , fones=0;
        for(int i=0;i<n;i++){
            if(s[i]!=f[i]){
                cnt++;
                if(s[i]=='0'){
                    szeros++;
                }
                else{
                    sones++;
                }
                if(f[i]=='0'){
                    fzeros++;
                }
                else{
                    fones++;
                }
            }
        }
        cout<<cnt-min(min(szeros,sones),min(fzeros,fones))<<endl;    
    }
}
