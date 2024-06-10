#include<bits/stdc++.h>
#include<bitset>
using namespace std;

bool iskproper(string s , int k){
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int last = 1;
        int i=n-1;
        while(s[i]==s[i-1]){
            last++;
            i--;
        }
        int rem = k-last;
        int p = 0;
        if(s[n-1]=='0'){
            int cnt = 0;
            for(int i=0;i<n-last;i++){
                if(s[i]=='0'){
                    cnt++;
                }
                if(cnt==rem && s[i+1]=='1'){
                    i++;
                    p=i;
                    reverse(s.begin() , s.begin()+i);
                    string one (s.begin()+i , s.end());
                    string two (s.begin() , s.begin()+i);
                    s = one + two;
                }
            }
        }
        else{
            int cnt = 0;
            for(int i=0;i<n-last;i++){
                if(s[i]=='1'){
                    cnt++;
                }
                else{
                    cnt=0;
                }
                if(cnt==rem && s[i+1]=='0'){
                    i++;
                    p=i;
                    reverse(s.begin() , s.begin()+i);
                    string one (s.begin()+i , s.end());
                    string two (s.begin() , s.begin()+i);
                    s = one + two;
                }
            }
        }
        if(iskproper(s,k)){
            cout<<p<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}