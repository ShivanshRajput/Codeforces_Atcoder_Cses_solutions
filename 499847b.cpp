#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if((sum-arr[i])/(n-1)==arr[i] and (sum-arr[i])%(n-1)==0){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for(auto it : ans){
        cout<<it<<" ";
    } 
    cout<<endl;
}