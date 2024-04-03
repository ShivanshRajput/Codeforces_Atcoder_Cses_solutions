#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int xorsum=0;
        for(int i=0;i<n;i++){ 
            int c;
            cin>>c;
            xorsum^=c;
        }
        if(n&1){
            cout<<xorsum<<endl;
        }
        else{
            if(xorsum!=0){
                cout<<-1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
}