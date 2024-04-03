#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ans;
        cin>>ans;
        n--;
        while(n--){
            int tmp;
            cin>>tmp;
            ans&=tmp;
        }
        cout<<ans<<endl;
    }
}