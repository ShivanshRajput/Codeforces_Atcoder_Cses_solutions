#include<iostream>
using namespace std;
long long diff(long long a , long long b){
    if(a>b){
        return a-b;
    }
    return b-a;
}
int main(){
    long long a,m,l,r;
    cin>>a>>m>>l>>r;
    long long ans=(r-l)/m;
    if(((diff(r,l))%m <= m-(a%m) ) && diff(r,l)!=0){
        cout<<ans+1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
}

