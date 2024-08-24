#include<iostream>
using namespace std;

int iterative_gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"GCD : "<<gcd(a,b)<<" | iterative :"<<iterative_gcd(a,b);
}