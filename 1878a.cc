#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool test=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==k){
                test=1;
            }
        }
        if (test){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}