#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[26]={0};
    for (int i=0;i<str.length();i++){
       freq[str[i]-'a']++; 
    }
    int ans=0;
    for (int i=0;i<26;i++){
        if (freq[i]){
            ans++;
        }
    }
    if(ans%2){
        cout<<"IGNORE HIM!\n";
    }
    else{
        cout<<"CHAT WITH HER!\n";
    }
}