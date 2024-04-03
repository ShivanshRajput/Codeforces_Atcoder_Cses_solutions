#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool test=false;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            test=true;
            break;
        }
    }
    if (test){
        cout<<"Happy Alex\n";
    }
    else{
        cout<<"Poor Alex\n";
    }
}