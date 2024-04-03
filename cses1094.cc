#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long a=arr[0];
    long ans=0;
    for(int i=1;i<n;i++){
        if(arr[i]<a){
            ans+=a-arr[i];
        }
        else {
            a=arr[i];
        }
    }
    cout<<ans<<endl;
}