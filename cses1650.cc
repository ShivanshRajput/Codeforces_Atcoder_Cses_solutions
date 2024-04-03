#include<iostream>
using namespace std;
int main(){
    long n,q;
    cin>>n>>q;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long sum[n+1];
    sum[0]=0;
    sum[1]=arr[0];
    for(int i=2;i<=n;i++){
        sum[i]=(arr[i-1]^sum[i-1]);
    }
    while (q--){
        int a,b;
        cin>>a>>b;
        cout<<(sum[b]^sum[a-1])<<endl;
    }
}