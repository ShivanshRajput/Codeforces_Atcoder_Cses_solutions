#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    bool flag = true;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<"\n";
        }else{
            if(n<0){
                if(flag){
                    cout<<n/2<<"\n";
                }
                else{
                    cout<<n/2 + n%2<<"\n";
                }
                flag = !flag;
            }
            else{
                if(flag){
                    cout<<n/2 + n%2<<"\n";
                }
                else{
                    cout<<n/2 <<"\n";
                }
                flag = !flag;
            }            
        }
    }
}