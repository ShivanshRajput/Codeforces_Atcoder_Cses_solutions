#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long ans=0;
    for(int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans<<endl;
}