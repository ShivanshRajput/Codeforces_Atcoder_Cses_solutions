#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    int getHealth(){       // getter function 
        return health;
    }
    void setHealth(int hh){   // setter function
        health = hh;
    }    
};

int main(){
    // Static Memory Allocation
    Hero a;   
    a.setHealth(55);
    cout<< "a's health : " << a.getHealth() << endl;

    // Dynamic Memory Allocation
    Hero *b = new Hero;
    (*b).setHealth(44);
    cout<< "b's health : " << (*b).getHealth() << endl;
    // alter 
    b->setHealth(24);
    cout<< "b's health : " << b->getHealth() << endl;
}