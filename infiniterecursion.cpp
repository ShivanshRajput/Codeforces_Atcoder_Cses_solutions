#include <iostream>
using namespace std;

void funn(){
    cout<<"GFG"<<endl;
    funn();
}


int main(){
    funn();
    return 0;
}