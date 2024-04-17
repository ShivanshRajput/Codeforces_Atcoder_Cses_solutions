#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0;
        while(s[i]=='0') i++;
        int j=s.size()-1;
        while(s[j]=='0') j--;
        int count = 0;
        for(int k = i;k<=j;k++){
            if(s[k]=='0') count++;
        }
        cout<<count<<endl;
    }
}