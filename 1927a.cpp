#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        while(s[i]=='W'){
            i++;
        }
        int j=n-1;
        while(s[j]=='W'){
            j--;
        }
        cout<<j-i+1<<endl;
    }
}