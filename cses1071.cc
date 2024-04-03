#include<iostream>
using namespace std;
int main(){
    long t;
    cin>>t;
    while (t--){
        long long r,c;
        cin>>r>>c;
        if(r==c){
            cout<<c*(c-1)+1<<endl;
        }
        else if(r<c){
            if(c%2==0){
                cout<<c*(c-1)+1 - (c-r)<<endl;
            }
            else{
                cout<<c*(c-1)+1 + (c-r)<<endl;
            }
        } 
        else{
            if(r%2==0){
                cout<<r*(r-1)+1 + (r-c)<<endl;
            }
            else{
                cout<<r*(r-1)+1 - (r-c)<<endl;
            }
        }
    }
}