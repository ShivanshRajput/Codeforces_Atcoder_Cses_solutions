#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len=1 , maxlen = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            len++;
            maxlen = max(maxlen , len);
        }
        else{
            len=1;
        }
    }
    cout<<maxlen;
}
