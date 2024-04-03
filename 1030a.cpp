#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = 0;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}