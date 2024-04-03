#include<iostream>
#include<vector>
using namespace std;

int subsum(vector <int> & arr , int sum , int i=0 , int curr=0){
    if(i==arr.size()){
        if(curr==sum){
            return 1;
        }
        return 0;
    }
    return subsum(arr,sum,i+1,curr) + subsum(arr,sum,i+1,curr+arr[i]);
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<"substrings: "<<subsum(arr, sum);
}