#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<50;i++){
        if(i==0){
            cout<<(i|(i+1))<<" ";
        }
        else{
            cout<<((i-1)|i|(i+1))<<" ";
        }
    }
}