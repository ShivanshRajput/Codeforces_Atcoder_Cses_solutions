#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    Hero(int health){   // this keyword points at current object
        this->health = health;
    }    
};

int main(){
    cout<< "before constructor call" << endl;
    Hero ramesh(14);
    cout<< "after constructor call" << endl;
}