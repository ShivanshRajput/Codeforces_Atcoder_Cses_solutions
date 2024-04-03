#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        while(n--){
            int c;
            cin>>c;
            ans|=c;
        }
        cout<<ans<<endl;
    }
}