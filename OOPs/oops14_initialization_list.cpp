#include<iostream>
using namespace std; 

class Hero {
    int power;
    int attack;
    int health;

    public:
    // constructor using initialization list.
    Hero(int pow , int atk , int hlt) : power(pow) , attack(atk) , health(hlt) {}

    // printing function 
    void printStats(){
        cout<<"power :  "<< this->power << endl;
        cout<<"attack : "<< this->attack << endl;;
        cout<<"health : "<< this->health << endl;
    }
};

int main(){
    Hero ramesh(98 , 12 , 65);
    ramesh.printStats();
}
