#include<iostream>
#include<bit>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout<<__bit_floor(n)-1<<endl;
    }
}