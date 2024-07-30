#include<bits/stdc++.h>
using namespace std;
#define int long long


int minimiseinversion(string s,int n,int k){
    int count=k;
    for(int i=0;i<n;i++){
        if(count==0){
            break;
        }
        if(s[i]=='1'){
            s[i]='0';
            count--;
        }
        
        
    }
    int ans=0;
    int cot=0;    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans+=cot;

        }
        else{
            cot++;
        }
    }
    return ans;
}

int ghaa(string s,int n,int k){
    int count=k;
    for(int i=n-1;i>=0;i--){
        if(count==0){
            break;
        }
        if(s[i]=='0'){
            s[i]='1';
            count--;
        }
        
        
    }
    int ans=0;
    int cot=0;    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans+=cot;

        }
        else{
            cot++;
        }
    }
    return ans;
}




void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=minimiseinversion(s,n,k);
    ans=min(ans,ghaa(s,n,k));  
   
    cout<<ans<<endl;

    
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}