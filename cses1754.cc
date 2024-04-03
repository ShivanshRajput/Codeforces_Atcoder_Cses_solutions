#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long a,b;
        cin>>a>>b;
        if(a==b){
            if(a%3==0){
                cout<<"YES\n";
                continue;
            }
            else{
                cout<<"NO\n";
                continue;
            }
        }
        if(a==2*b || b==2*a){
            cout<<"YES\n";
            continue;
        }
        else {
            cout<<"NO\n";
            continue;
        }
    }
}