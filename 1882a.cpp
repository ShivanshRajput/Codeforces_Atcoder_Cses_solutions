#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int b=1;
        for(int i=0;i<n;i++){
            if(arr[i]==b){
                i--;
            }
            b++;
        }
        cout<<b-1<<endl;
    }
}