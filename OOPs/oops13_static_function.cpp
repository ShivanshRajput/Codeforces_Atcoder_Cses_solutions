#include<iostream>
using namespace std;

class player {
    public:
    int health;
    static int timer;
      // static function 
    static int funct(){
        return timer;
    }
};

int player :: timer = 59;

int main(){
    cout<< player::funct() <<endl;
}   