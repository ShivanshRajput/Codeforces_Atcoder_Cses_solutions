#include<iostream>
using namespace std;
int ncr(int n,int r){
    double ans=1;
    for(int i=1;i<=r;i++){
        ans*=(n+1-i)/(double)i;
    }
    return (int)ans;
}

int npr(int n , int r){
    int ans=1;
    for(int i=0;i<r;i++){
        ans*=(n-i);
    }
    return ans;
}

int main(){
    int n=6 ;
    for(int i=0;i<=n;i++){
        cout<<n<<"c"<<i<<" "<<ncr(n,i)<<endl;
    }
    for(int i=0;i<=n;i++){
        cout<<n<<"p"<<i<<" "<<npr(n,i)<<endl;
    }
}