#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int minlen=n;
        int len =0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[0]){
                len++;
            }
            else{
                if(len!=0) minlen = min(minlen, len);
                len=0;
            }
        }
        minlen = min(minlen, len);
        if(minlen==n){
            cout<<-1<<endl;
        }
        else{
            cout<<minlen<<endl;
        }

    }
}