#include<iostream>
using namespace std;

union Test{
    int x;
    char bin[4];
};

int main(){
    Test t;
    t.x=512;
    cout<<(int)t.bin[0]<<" "<<(int)t.bin[1]<<" "
        <<(int)t.bin[2]<<" "<<(int)t.bin[3];

    return 0;
}