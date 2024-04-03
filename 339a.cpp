#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.length();
    int one=0,two=0,three=0;
    for (int i=0;i<n;i+=2){
        if (str[i]=='1'){
            one++;
            continue;
        }
        if (str[i]=='2'){
            two++;
            continue;
        }
        if (str[i]=='3'){
            three++;
            continue;
        }
    }
    int j=n-1;
    while(one--){
        cout<<'1';
        if (j>0){
            cout<<'+';
        }
        j-=2;
    }
    while(two--){
        cout<<'2';
        if (j>0){
            cout<<'+';
        }
        j-=2;
    }
    while(three--){
        cout<<'3';
        if (j>0){
            cout<<'+';
        }
        j-=2;
    }
}