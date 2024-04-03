#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t="it";
        if(s.find(t) != string::npos){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}