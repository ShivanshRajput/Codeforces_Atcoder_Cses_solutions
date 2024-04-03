#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,k;
        cin>>n>>k;
        int prod=1;
        for (int i=0;i<n;i++){
            int c;
            cin>>c;
            prod*=c;
        }
        if(2023%prod==0){
            cout<<"YES\n";
            cout<<2023/prod<<" ";
            k--;
            while(k--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
}