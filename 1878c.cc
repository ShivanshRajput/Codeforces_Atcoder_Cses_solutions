#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long min=(k*(k+1))/2;
        long long max=(n*(n+1))/2;
        long long dif=((n-k)*(n-k+1))/2;
        max-=dif;
        if(x>=min && x<=max){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}