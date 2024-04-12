#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,d;
        cin>>s>>d;
        int i=0;
        while(s[i]==d[i]){
            i++;
        }
        if(s[i]>d[i]){
            i++;
            for(;i<s.size();i++){
                if(s[i]>d[i]){
                    swap(s[i],d[i]);
                }
            }

        }
        else{
            i++;
            for(;i<s.size();i++){
                if(s[i]<d[i]){
                    swap(s[i],d[i]);
                }
            }
        }
        cout<<s<<endl<<d<<endl;
    }
}