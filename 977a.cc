#include<iostream>
using namespace std;
int main(){
    long n;
    int k;
    cin>>n>>k;
    while (k--){
        if(n%10){
            n--;
        }
        else{
            n/=10;
        }
    }
    cout<<n<<endl;
}