#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        string t=s;
        reverse(t.begin() , t.end());
        if(s.compare(t)<=0){
            if(n%2==0){
                cout<<s<<endl;
            }
            else{
                cout<<s<<t<<endl;
            }
        }
        else{
            if(n%2==0){
                cout<<t<<s<<endl;
            }
            else{
                cout<<t<<endl;
            }
        }
    }
}