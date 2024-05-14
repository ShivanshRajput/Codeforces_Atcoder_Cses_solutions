#include<iostream>
using namespace std;

class Hero {
    public:
    char name[100];
    int health;
    char level;
};


int main(){
    Hero ramesh , suresh;
    cout<<"ramesh's size : "<<sizeof(ramesh)<<endl;  // 100 + 4 + 1 = 105 => 108 (due to padding added by compiler)
    cout<<"suresh's size : "<<sizeof(suresh)<<endl;  // same 108 (due to padding added by compiler)
}