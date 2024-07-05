#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            cout<< stoi(s)<<endl;
            continue;
        }
        if(s[0]=='0' or s[n-1]=='0'){
            cout<<0<<endl;
            continue;
        }
        if(n>=4){
            bool flag = 0;
            for(int i=1;i<n-1;i++){
                if(s[i]=='0'){
                    flag =1;
                    break;
                }
            }
            if(flag){
                cout<<0<<endl;
                continue;
            }
        }
        

    }
}