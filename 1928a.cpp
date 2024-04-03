#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a=max(n,k);
        long long b=min(n,k);
        if(b%2==0){
            cout<<"Yes\n";
        }
        else{
            if(2*b==a){
                cout<<"No\n";
            }
            else if(a%2==0){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
}