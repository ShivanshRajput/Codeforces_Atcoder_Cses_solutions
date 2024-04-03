#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        a=max(a,b)-min(a,b);
        if(a&1){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
}