#include<iostream>
using namespace std;

class player {
    public:
    int health;
    static int timer;
};

int player :: timer = 59;

int main(){
    // cout<< player :: timer <<endl;  // recommended
    // player dave;
    // cout<< dave.timer << endl;      // not recommended

    player A;
    cout<<A.timer<<endl;
    A.timer = 10;
    cout<< player :: timer <<endl;
}   