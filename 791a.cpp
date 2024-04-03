#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(int)(log(1.0*a/b)/log(1.0*2/3) + 1)<<endl;
}