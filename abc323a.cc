#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool test = true;
    for (int i=1;i<16;i+=2){
        if(str[i]=='1'){
            test=false;
            break;
        }
    }
    if (test){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}