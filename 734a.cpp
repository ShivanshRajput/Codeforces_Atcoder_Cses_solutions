#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if (str[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if (a>d){
        cout<<"Anton\n";
    }
    else if (a<d){
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
    }
}