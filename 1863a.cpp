#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,a,q;
        cin>>n>>a>>q;
        int read=a;
        int pos=a;
        // int test=0;
        string notification;
        cin>>notification;
        for (int i=0;i<q;i++){
            if(read>=a){
                cout<<"YES\n";
                break;
            }
            if(notification[i]=='+'){
                read++;
                pos++;
            }
            else{
                read--;
            }
            if(read>=a){
                cout<<"YES\n";
                break;
            }
        }
        if (read<a && pos>=a){
            cout<<"MAYBE\n";
        }
        else if (pos<a){
            cout<<"NO\n";
        }
    }
}