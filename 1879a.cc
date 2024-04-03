#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long s[n],e[n];
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
        }
        long w=s[0];
        bool flag=1;
        for(int i=1;i<n;i++){
            if(s[i]>=w){
                if(e[i]>=e[0]){
                    flag=0;
                }
            }
        }
        if(flag){
            cout<<w<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}