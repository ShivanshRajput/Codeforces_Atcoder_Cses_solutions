#include<iostream>
using namespace std;
int equililbriumPointPrefixSum(int arr[] , int n){
    int lps[n];
    lps[0]=arr[0];
    for(int i=1;i<n;i++){
        lps[i]=arr[i]+lps[i-1];
    }
    int rps[n];
    rps[n-1]=arr[n-1];
    for(int i=n-2 ; i>=0 ;i--){
        rps[i]=arr[i]+rps[i+1];
    }
    for(int i=0;i<n;i++){
        if(lps[i]==rps[i]){
            return i;
        }
    }
    return -1;
}

int equililbriumPoint2pointer(int arr[] , int n){   // this approach is not working for negative nos like test case [-1 -1 -1 -1 -1 0]
    int i=0 , j=n-1 , lsum=arr[0] , rsum=arr[n-1];
    while(i<j){
        if(lsum<rsum){
            i++;
            lsum+=arr[i];
        }
        else{
            j--;
            rsum+=arr[j];
        }
    }
    if(i==j && lsum==rsum){
        return i;
    }
    return -1;
}

int equilibriumPoint(int arr[] , int n){
    int rsum=0;
    for(int i=0;i<n;i++){
        rsum+=arr[i];
    }
    int lsum=0;
    for(int i=0;i<n;i++){
        if(lsum==rsum-arr[i]){
            return i;
        }
        lsum+=arr[i];
        rsum-=arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<equililbriumPointPrefixSum(arr , n)<<endl;
    cout<<equililbriumPoint2pointer(arr , n)<<endl;
    cout<<equilibriumPoint(arr , n)<<endl;
}

/*
***************** TEST CASES ******************
6
3 4 8 -9 20 6
output : 4

3
4 2 -2
output : 0

3
4 2 2 
output : -1

*/