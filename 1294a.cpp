#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3!=0){
            cout<<"NO\n";
            continue;
        }
        if(a>(a+b+c+n)/3 or b>(a+b+c+n)/3 or c>(a+b+c+n)/3 ){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}