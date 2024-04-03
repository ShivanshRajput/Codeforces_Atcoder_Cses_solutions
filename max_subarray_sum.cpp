#include<iostream>
using namespace std;
int maxSubarraySum(int arr[] , int n){   // naive approach
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            res=max(res,curr);
        }
    }
    return res;
}

int maxSubArraySum(int arr[] , int n){  // efiicient approach  aka  kadane's algorithm
    int maxend=arr[0];
    int res=maxend;
    for(int i=1;i<n;i++){
        maxend=max(arr[i] , arr[i] + maxend);
        res=max(maxend , res);
    }
    return res;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySum(arr , n)<<endl;
    cout<<maxSubArraySum(arr , n)<<endl;
}