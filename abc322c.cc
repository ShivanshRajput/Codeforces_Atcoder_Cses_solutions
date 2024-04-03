#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int d=1;
    for(int i=0;i<m;i++){
        d=arr[i]-d;
        for(int j=d;j>=0;j--){
            cout<<j<<endl;
        }
        d=arr[i]+1;
    }
}
