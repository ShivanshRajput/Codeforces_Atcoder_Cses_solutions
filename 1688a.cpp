#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=n&(n-1);
        ans=ans^n;
        if(ans!=n){
            cout<<ans<<endl;
        } 
        else{
            if(ans==1){
                cout<<3<<endl;
            }
            else{
                ans++;
                cout<<ans<<endl;
            }
        }
    }
}