#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=0;i<n;i++){
        if(i%2){
            m+=i;
            cout<<m<<" ";
        }
        else{
            m-=i;
            cout<<m<<" ";
        }
    }
    cin>>n;
}