#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int n;
        cin>>n;
        n--;
        ans+=n;
        if(ans%2){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

}