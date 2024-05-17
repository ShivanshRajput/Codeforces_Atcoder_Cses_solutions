#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    public:
    char *name;
    int health;
     // constructor function 
    Hero(){
        cout<< "constructor function called\n";
    } 

     // destructor function 
    ~Hero(){
        cout<< "---destructor function called--- \n";
    }  
};

int main(){
    Hero A;

    Hero *B = new Hero();

    // mannual destructor call for 'B'
    delete B;
    
}   