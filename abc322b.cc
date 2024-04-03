#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s;
    cin>>t;
    bool pre=1,suff=1;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            pre=0;
            break;
        }
    }
    for(int i=m-n;i<m;i++){
        if(s[i-(m-n)]!=t[i]){
            suff=0;
            break;
        }
    }
    if(pre){
        if(suff){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    else{
        if(suff){
            cout<<2;
        }
        else{
            cout<<3;
        }
    }
}