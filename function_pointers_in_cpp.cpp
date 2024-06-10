#include<iostream>
using namespace std;

int mul(int a , int b){
    return a*b;
}

int add(int a , int b){
    return a+b;
}

int main(){
    int (*func) (int , int);
    func = add;
    cout<< func(10,3);
}