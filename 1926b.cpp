#include<bits/stdc++.h>
#include <bitset>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<bitset<11>> vb(n);
        vector<int> count(n);
        for(int i=0;i<n;i++){
            cin>>vb[i];
            count[i]=vb[i].count();
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if(count[i]==1){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"TRIANGLE\n";
        }
        else{
            cout<<"SQUARE\n";
        }
    }
}