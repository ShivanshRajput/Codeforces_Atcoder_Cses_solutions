#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(freq[i]>=i+1){
                count++;
            }
        }
        cout<<count<<endl;
    }
}