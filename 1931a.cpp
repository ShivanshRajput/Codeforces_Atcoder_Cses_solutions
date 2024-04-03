#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n-=3;
        char c1='a',c2='a',c3='a';
        if(n<=25){
            c3='a'+n;
            n-=c3-'a';
        }
        else{
            c3='z';
            n-=25;
        }
        if(n<=25){
            c2='a'+n;
            n-=c2-'a';
        }
        else{
            c2='z';
            n-=25;
        }
        c1='a'+n;
        cout<<c1<<c2<<c3<<endl;
    }
}