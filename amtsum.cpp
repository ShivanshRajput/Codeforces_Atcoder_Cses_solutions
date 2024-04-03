#include<iostream>
using namespace std;
int main(){
    freopen("addin.txt", "r", stdin);
    int a,b;
    cin>>a>>b;
    
    freopen("addout.txt", "w", stdout);
    cout<<a+b;
}