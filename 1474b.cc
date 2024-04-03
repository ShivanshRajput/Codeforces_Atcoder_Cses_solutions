#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){            // ye code sabse efficient way hai prime find karne ka
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

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int d;
        cin >> d;      // first number is for sure 1
        int n1=1+d;    // potential 2nd number.. incremented till next prime is foound 
        while(!isPrime(n1)){
            n1++;
        }
        int n2=n1+d;   // potential 3rd number.. incremented till next prime is found 
        while(!isPrime(n2)){
            n2++;
        }
        cout<<n1*n2<<endl;    // here both n1 and n2 are now primes.. so their product gives required answer
    }
    return 0;
}

