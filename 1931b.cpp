#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        bool flag=true;
        int avg=sum/n;
        int remaining=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=avg){
                remaining+=arr[i]-avg;
            }
            else{
                remaining-=avg-arr[i];
            }
            if(remaining<0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}