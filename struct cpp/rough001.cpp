#include<iostream>
using namespace std;
int main(){
    int i=1;
    cout<<"HELLO"<<endl;

    while (i<=5){
        if (i==3){
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<"HELLO"<<endl;
    return 0;
}