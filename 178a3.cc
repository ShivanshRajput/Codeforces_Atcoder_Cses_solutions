#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int moves=0;
    for(int i=0;i<n-1;i++){
        arr[i+(int)log2(n-i)]+=arr[i];
        moves+=arr[i];
        cout<<moves<<endl;
    }
}