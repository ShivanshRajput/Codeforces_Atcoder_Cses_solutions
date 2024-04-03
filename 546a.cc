#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int ans=(w*(w+1))/2;
    ans*=k;
    ans-=n;
    if (ans>0){
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
}