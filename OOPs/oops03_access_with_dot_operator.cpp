#include<iostream>
using namespace std;

class Hero {
    public:
    int health;
    char level;
};

int main(){
    Hero ramesh ;
    ramesh.health = 70;
    ramesh.level = 'B';
    cout<< "Ramesh's health : " << ramesh.health << endl;
    cout<< "Ramesh's level : " << ramesh.level << endl;
}