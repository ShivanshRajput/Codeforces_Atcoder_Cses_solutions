#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int lcount=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                lcount++;
            }
            else{
                break;
            }
        }
        int rcount=1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]==arr[i+1]){
                rcount++;
            }
            else{
                break;
            }
        }
        // cout<<lcount<<"--"<<rcount<<endl;
        if(arr[0]==arr[n-1]){
            if(lcount>=n){
                cout<<0<<endl;
            }
            else{
                cout<<n-(lcount+rcount)<<endl;
            }
        }
        else{
            lcount=max(lcount,rcount);
            cout<<n-lcount<<endl;
        }

    }
}