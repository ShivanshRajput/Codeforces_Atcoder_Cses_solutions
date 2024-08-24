#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        sort(p.begin() , p.end());
        int n = p.size();
        int m = h.size();
        bool flag = false;
        for(int i=0;i<=m-n;i++){
            string test = h.substr(i,n);
            sort(test.begin() , test.end());
            if(test == p){
                flag = true;
                break;
            }
        }   
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}