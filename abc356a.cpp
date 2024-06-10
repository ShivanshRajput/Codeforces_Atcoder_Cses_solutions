#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    reverse(arr.begin()+l-1 , arr.begin()+r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}