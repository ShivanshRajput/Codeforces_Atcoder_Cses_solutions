#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int k=0,l=0;
    for(int i=0;i<n;i++){
        if(s[i]==32){
            l=i;
            for(int j=k;j<l/2;j++){
                char temp=s[i];
                s[i]=s[l-1-i];
                s[l-1-i]=temp;
            }
            k=i+1;
        }
    }
    cout<<s<<endl;
}