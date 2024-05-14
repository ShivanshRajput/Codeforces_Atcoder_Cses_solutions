#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    public:
    char *name;
    int health;

    Hero(char str[] ,int health){
        this->name = str;
        this->health = health;
    }
    void printHero(){
        cout << this->name << endl;
        cout << this->health << endl;
    }    
};

int main(){
    char nm1[7] = "Ramesh";
    Hero A(nm1 , 26);
    A.printHero();

    char nm2[7] = "Suresh";
    Hero B(nm2 , 12);
    B.printHero();

    B = A;
    cout<<"After Copy assignment operator\n";

    A.printHero();
    B.printHero();

}