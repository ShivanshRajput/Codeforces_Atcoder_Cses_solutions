#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        
        for (int i=0;i<n;i++){
            cin>>arr[n];
        }
        int ans=arr[0];
        for (int i=1;i<n;i++){
            ans^=arr[i];
        }
        cout<<ans<<"----"<<endl;
    }
}