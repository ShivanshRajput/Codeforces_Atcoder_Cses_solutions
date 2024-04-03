#include<iostream>
using namespace std;
int longestSubarray(int arr[] , int n){   // longest subarray with alternating even odds
    int cnt=1;
    int mcnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]%2 != arr[i-1]%2){
            cnt++;
            mcnt=max(mcnt , cnt);
        }
        else{
            cnt=1;
        }
    }
    return mcnt;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestSubarray(arr , n);
}