#include<bits/stdc++.h>
#include<bit>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<log2l(__bit_floor(r))<<endl;

    }
}