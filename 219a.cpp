#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int freq[26]={0};
    for(char c: s){
        freq[c-'a']++;
    }
    string ans = "";
    for(int i=0;i<26;i++){
        if(freq[i]%k!=0){
            cout<<-1<<endl;
            return 0;
        }
        int ctr = freq[i]/k;
        while(ctr--){
            ans+=char(i+'a');
        }
    }
    while(k--){
        cout<<ans;
    }
    cout<<endl;
}