#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int uc=0,lc=0;
    for (int i=0;i<n;i++){
        if (str[i]>='a'){
            lc++;
        }
        else{
            uc++;
        }
    }
    if (lc<uc){
        for (int i=0;i<n;i++){
            if (str[i]>='a'){
                str[i]-=32;
            }
        }
    }
    else{
        for (int i=0;i<n;i++){
            if (str[i]<='Z'){
                str[i]+=32;
            }
        }
    }
    cout<<str<<endl;
}