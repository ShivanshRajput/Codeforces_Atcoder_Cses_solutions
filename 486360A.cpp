#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!=str[i+1]){
                if(str[i]=='0'){
                    count++;
                }
            }
        }
        cout<<min(count , 2)<<endl;
    }
}