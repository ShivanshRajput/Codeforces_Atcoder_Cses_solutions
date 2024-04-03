// given an unsorted array of non negative integers find if there is a subarray with given sum.

#include<iostream>
using namespace std;

int subarrayWithSum(int arr[] , int n , int sum){
    int curr_sum=0;
    int init=0;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        // cout<<curr_sum<<"__"<<endl;
        while(curr_sum > sum && init<i){
            curr_sum-=arr[init];
            // cout<<curr_sum<<"__"<<endl;
            init++;
        }
        if(curr_sum==sum){
            return init;
        }
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
    int s;
    cin>>s;
    cout<<subarrayWithSum(arr , n , s);
}