#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ones , twos;
        cin>>ones>>twos;
        int a = ones %2;
        int b = twos %2;
        if(a==0 && b==0){
            cout<<"YES\n";
        }
        else if(a==0 && b==1){
            if(ones>=2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}