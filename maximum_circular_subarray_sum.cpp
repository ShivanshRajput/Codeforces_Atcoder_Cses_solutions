#include<iostream>
using namespace std;

int maxCircSubarraySum(int arr[] , int n){
    int minres=arr[0];       // modified kadane 'res'
    int maxres=arr[0];       // normal kadane 'res'
    int currmin=arr[0];      // modified kadane 'curr_max'
    int currmax=arr[0];      // normal kadane 'curr_max'
    int sum=arr[0];
    for(int i=1;i<n;i++){
        currmax=max(arr[i]+currmax , arr[i]);     // normal kadane 'curr_max'
        currmin=min(arr[i]+currmin , arr[i]);     // modified kadane 'curr_min'
        maxres=max(maxres , currmax);        // normal kadane 'res'
        minres=min(minres , currmin);        // modified kadane 'res'
        sum+=arr[i];
    }
    // cout<<"maxres "<<maxres<<endl;
    // cout<<"minres "<<minres<<endl;
    // cout<<"sum  "<<sum<<endl;
    return max(maxres , sum - minres);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxCircSubarraySum(arr , n);
}