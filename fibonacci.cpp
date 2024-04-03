#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int letter(string & s){
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=fib(s[i]-'A');
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<letter(s);
}