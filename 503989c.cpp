#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s,d;
        cin>>s>>d;
        if(s%2==d%2){
            cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}