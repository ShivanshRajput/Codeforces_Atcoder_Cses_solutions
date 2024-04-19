#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>=c){
            cout<<-1<<" ";
        }
        else{
            cout<<1<<" ";
        }
        if(a<=c/b){
            cout<<-1<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
}