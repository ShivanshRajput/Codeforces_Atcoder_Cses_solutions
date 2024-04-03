#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        if(str[0]=='a' || str[1]=='b' || str[2]=='c'){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}