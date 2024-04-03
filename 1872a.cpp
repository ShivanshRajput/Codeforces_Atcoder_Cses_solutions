#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        int m;
        m=abs(a-b);
        c*=2;
        int ans=m/c;
        
        if (m%c){
            ans++;
        }
        cout<<ans<<endl;
    }
}