#include<iostream>
using namespace std;

void substrings(string & s , string curr="" , int i=0){
    if(i==s.length()){
        cout<<curr<<" ";
        return;
    }
    substrings(s,curr,i+1);
    substrings(s,curr+s[i],i+1);
}

int main(){
    string str;
    cin>>str;
    substrings(str);
}