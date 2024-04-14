#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long sum = 0 , count = 0;
        while(sum<=n){
            if(a>b){
                b+=a;
                sum=b;
                count++;
            }
            else{
                a += b;
                sum = a;
                count++;
            }
        }
        cout<<count<<endl;
    }
}