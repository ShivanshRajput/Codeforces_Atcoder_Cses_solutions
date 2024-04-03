#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ca=0 ,cb=0;
        for(char &x: s){
            if(x=='A'){
                ca++;
            }
            else{
                cb++;
            }
        }
        if(ca>cb){
            cout<<'A'<<endl;
        }
        else{
            cout<<'B'<<endl;
        }
    }
}