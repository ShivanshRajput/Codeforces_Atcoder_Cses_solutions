#include<iostream>
using namespace std;
int consecutiveSum(int arr[] ,int n, int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxi=sum;
    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        maxi=max(maxi , sum);
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<consecutiveSum(arr , n , k);
}