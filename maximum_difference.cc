#include<iostream>
using namespace std;

int maxdiff1(int arr[] , int n){
    int maxd=arr[1] - arr[0];
    for (int i=0;i<n;i++){
        for(int j=i+1 ; j<n ; j++){
            maxd=max(arr[j]-arr[i] , maxd);
        }
    }
    return maxd;
}

int maxdiff2(int arr[] , int n){
    int mini=arr[0];
    int maxd=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        mini=min(mini , arr[i]);
        maxd=max(arr[i]-mini , maxd);
    }
    return maxd;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxdiff1(arr , n)<<endl;
    cout<<maxdiff2(arr , n)<<endl;
}