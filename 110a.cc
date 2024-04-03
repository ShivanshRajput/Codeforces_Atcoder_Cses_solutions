#include<iostream>
using namespace std;

int main(){
    string num;
    cin>>num;
    int n=num.length();
    int luc=0;
    for (int i=0;i<n;i++){
        if (num[i]=='4' || num[i]=='7'){
            luc++;
        }
    }
    if (luc==4 || luc==7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}