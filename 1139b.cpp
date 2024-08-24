#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans = 0;
    long long mini = a[n-1];
    for(int i = n-1;i>=0;i--){
        mini = min(a[i] , mini);
        ans += max(mini , 0ll);
        mini--;
    }
    cout<<ans;
}