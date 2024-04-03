#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long f,a,b;
        cin>>n>>f>>a>>b;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        f-=min((arr[0])*a , b);
        if(f<=0){
            flag=false;
        }
        for(int i=0;i<n-1;i++){
            f-=min((arr[i+1]-arr[i])*a , b);
            if(f<=0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}