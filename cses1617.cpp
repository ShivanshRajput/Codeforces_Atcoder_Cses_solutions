#include<iostream>
using namespace std;
unsigned long long M = 1000000007;
int main(){
    long n;
    cin>>n;
    long ans=1;
    while(n--){
        ans=(ans*2)%M;
    }
    cout<<ans<<endl;
}