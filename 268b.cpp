#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long  ans = (n-1)*(n)*(n+1)/6;
    cout<<ans+(n);
}