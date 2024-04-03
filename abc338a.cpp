#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]>='A' and s[0]<='Z'){
        bool flag=true;
        for(int i=1;i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z'){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }
}