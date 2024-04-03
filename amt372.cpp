#include<iostream>
using namespace std;
int main(){
    freopen("bendin.txt","r",stdin);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    int ans=(c-a)*(d-b) + (r-p)*(s-q);
    int l=0,w=0;
    if(p<c){
        l=max(a,p)-min(c,r);
    }
    if(q<d){
        w=max(b,q)-min(s,d);
    }
    ans-=(l*w);
    freopen("bendout.txt","w",stdout);
    cout<<ans;
}