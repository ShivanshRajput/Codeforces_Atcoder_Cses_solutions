#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(1){
        n++;
        int a = n%10;
        int b = n/10 %10;
        int c = n/100 %10;
        int d = n/1000 ;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            break;
        }
    }
    cout<<n<<endl;
}