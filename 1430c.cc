#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        int a=n;
        for(int i=n-1;i>=1;i--){
            cout<<i<<" "<<a<<endl;
            a=(i+a+1)/2;
        }
    }
}