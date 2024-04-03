#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int index=-1;
        for(int i=1;i<s.size();i++){
            if(s[i]!='0'){
                index=i;
                break;
            }
        }
        long long n1=0;
        for(int i=0;i<index;i++){
            n1=(n1*10)+(long long)(s[i]-'0');
        }
        long long n2=0;
        for(int i=index;i<s.size();i++){
            n2=(n2*10)+(long long)(s[i]-'0');
        }
        if(n2>n1){
            cout<<n1<<" "<<n2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}