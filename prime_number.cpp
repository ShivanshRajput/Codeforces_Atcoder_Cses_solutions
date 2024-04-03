#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n==1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    for (int i=5;i*i<=n;i+=6){
        if (n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

bool issPrime(int n){
    if (n==1) return false;
    
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

void primefactors(int n){
    for (int i=2;i<n;i++){
        if (isPrime(i)){
            while (n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
    }
}

int main() {
    // cout<<"PRINT ALL PRIMES UPTO N \nEnter N : "<<endl;
    // int n=2000;
    // // cin>>n;
    // cout<<"  ";
    // for (int i=2;i<=n;i++){
    //     if (isPrime(i)){
    //         cout<<"+";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    //     if (issPrime(i)){
    //         cout<<"#";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    //     if (i%32==0){
    //         cout<<endl;
    //     }
    // }

    primefactors(18);

    return 0;
}