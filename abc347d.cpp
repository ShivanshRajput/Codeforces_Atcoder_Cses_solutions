#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    long long C;
    cin>>a>>b>>C;
    int c=__popcount(C);
    if(a+b-c%2==0){
        long long num1 = C;
        for(int i=0;i<=60;i++){
            if(c-a>0 and num1&(1<<i)){
                num1^=(1<<i);
                a++;
            }
        }
        for()
    }
    else{
        cout<<-1<<endl;
    }

}