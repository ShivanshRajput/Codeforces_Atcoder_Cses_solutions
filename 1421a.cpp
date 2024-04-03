#include<iostream>
#include<bit>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long c = a|b ;
        cout<<(a^c)+(b^c)<<endl; 
    }
}