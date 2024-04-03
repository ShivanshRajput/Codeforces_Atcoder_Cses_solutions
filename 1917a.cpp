#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zero=0,neg=0;
        while(n--){
            long long c;
            cin>>c;
            if(c==0){
                zero++;
            }
            if(c<0){
                neg++;
            }
        }
        if(zero || neg&1){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
    }
}