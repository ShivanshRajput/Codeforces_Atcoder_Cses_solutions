#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    public:
    char *name;
    int health;

    // custom copy constructor - with deep copy functionality
    Hero(Hero & temp){
        this->health = temp.health;
        
        char *str = new char[strlen(temp.name) + 1];
        strcpy(str , temp.name);
        this->name = str;
    }
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
    char nm[7] = "Babbar";
    Hero A( nm , 21);
    A.printHero(); 
    // shallow copy - default copy constructor
    Hero B(A);
    B.printHero();
    // updating values in A
    A.health = 25;
    A.name[0] = 'G';
    A.printHero();
    // checking values in B  - values passed by 
    // reference got updated in B aswell, while those 
    // passed by value got updated once.
    B.printHero();
}