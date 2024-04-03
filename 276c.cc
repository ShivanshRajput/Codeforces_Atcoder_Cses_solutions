#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum[n+1];
    sum[0]=0;
    sum[1]=arr[0];
    for(int i=2;i<=n;i++){
        sum[i]=arr[i-1]+sum[i-1];
    }
    for(int i=0;i<=n;i++){
        cout<<"___"<<sum[i]<<" ";
    }
    int ans=0;
    while(q--){
        int a,b;
        cin>>a>>b;
        b=b-a+1;
        ans+=sum[b];
        cout<<"**"<<ans<<" ";
    }
    cout<<ans;
}