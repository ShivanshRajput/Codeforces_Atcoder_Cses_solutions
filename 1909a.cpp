#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a=0,b=0,c=0,d=0;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x>0){
                a=1;
            }
            else if(x<0){
                c=1;
            }
            if(y>0){
                b=1;
            }
            else if(y<0){
                d=1;
            }
        }
        if(a+b+c+d==4){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}