#include<iostream>
#include<bitset>
#include<bit>
using namespace std;
int main(){
    bitset<10> b("10010") , c("10101");
    bitset<10> ans = b &  c;
    cout<<ans;
}