// setter and getter functions
#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    void printHealth(){
        cout<<"printing health : "<< health << endl ;
    }
    int getHealth(){       // getter function 
        return health;
    }
    void setHealth(int hh){   // setter function
        health = hh;
    }    
};

int main(){
    Hero ramesh;
    ramesh.setHealth(55);   // using setter function
    ramesh.printHealth();
    // using getter function
    cout<< "ramesh's health : " << ramesh.getHealth() << endl;
}