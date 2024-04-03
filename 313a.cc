#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        cout<<max(n/10 , (10*(n/100))+(n%10));
    }
}