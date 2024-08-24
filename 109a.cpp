#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sevens = -1;
    int fours = -1;
    for(int x = n/7;x>=0;x--){
        if((n-7*x)%4==0){
            sevens = x;
            fours = (n-7*x)/4;
            break;
        }
    }
    if(sevens == -1){
        cout<<-1;
        return 0;
    }
    while(fours--){
        cout<<4;
    }
    while(sevens--){
        cout<<7;
    }
    return 0;e
}