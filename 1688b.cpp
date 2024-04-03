#include<iostream>
#include<bit>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=0;
        while(n--){
            int c;
            cin>>c;
            if(c%2==0 && max<__countr_zero(c)){
                max=__countr_zero(c);
            }
        }
        cout<<max<<endl;
    }
}