#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    //Copy Constructor
    Hero(Hero & temp){
        this->health = temp.health;
    }

    Hero(int health){
        this->health = health;
    }
    void printHero(){
        cout<<this->health<<endl;
    }    
};

int main(){
    Hero ramesh(24);
    ramesh.printHero();

    // Copy Constructor
    Hero ritesh(ramesh);
    ritesh.printHero();

}