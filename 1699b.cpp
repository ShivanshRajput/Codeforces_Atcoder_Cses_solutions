#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        for(int i=0 ;i<a;i++){
            for(int j=0;j<b;j++){
                if((((i+1)/2)+((j+1)/2))%2){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
}