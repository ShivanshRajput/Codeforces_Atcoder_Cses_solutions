#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string arr;
        cin>>arr;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='B'){
                count++;
                i+=k-1;
            }
        }
        cout<<count<<endl;
    }
}