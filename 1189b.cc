#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<long>());
    if(arr[0]<arr[n-1]+arr[1]){
        cout<<"YES\n";
        cout<<arr[0]<<" ";
        for(long i=n-1;i>=1;i--){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"NO\n";
    }
}