#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.length();
    bool test=false;
    for(int i=0;i<n;i++){
        if (str1[i]>='a'){
            str1[i]-=32;
        }
        if (str2[i]>='a'){
            str2[i]-=32;
        }
        if (str1[i]<str2[i]){
            cout<<-1<<endl;
            break;
        }
        else if (str1[i]>str2[i]){
            cout<<1<<endl;
            break;
        }
        else{
            if (i==n-1){
                test=true;
            }
        }
    }
    if (test){
        cout<<0<<endl;
    }
}