#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string word = "hello";
    int i=0 , j=0;
    int match = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==word[j]){
            j++;
            match++;
        }
    }
    if(match==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}