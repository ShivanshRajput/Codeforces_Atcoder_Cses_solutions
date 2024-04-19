#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    int res = m/n;
    int count = 0;
    while(res%2==0){
        res/=2; 
        count++;
    } 
    while(res%3==0){
        res/=3; 
        count++;
    } 
    if(res==1){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}