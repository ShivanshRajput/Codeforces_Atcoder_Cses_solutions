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
        for(int i=0;i<n-2;i++){
            cout<<s[i];
            if(s[i+2]=='a' || s[i+2]=='e'){
                cout<<'.';
            }
        }
        cout<<s[n-2]<<s[n-1]<<endl;
    }
}