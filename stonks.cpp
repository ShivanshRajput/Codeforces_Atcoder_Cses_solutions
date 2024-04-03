#include<iostream>
using namespace std;
int maxprofit(int arr[] , int n){
    int stocks=0;
    int buy=arr[0];
    int sell=0;
    for(int j=0;j<n-1;j++){
        buy=min(buy , arr[j]);
        sell=max(sell , arr[j+1]);
        stocks=sell-buy;
    }
    return stocks;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxprofit(arr , n)<<endl;
}