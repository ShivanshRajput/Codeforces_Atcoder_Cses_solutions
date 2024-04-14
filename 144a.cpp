#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());
    int cnt = 0;
    int i=0;
    while(arr[i]!=maxi){
        i++;
        cnt++;
    } 
    int j=n-1;
    while(arr[j]!=mini){
        j--; 
        cnt++;
    } 
    if(i<j){
        cout<<cnt<<endl;
    }
    else{
        cout<<cnt-1<<endl;
    }
    
    
}