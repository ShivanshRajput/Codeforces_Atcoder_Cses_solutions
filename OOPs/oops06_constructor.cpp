#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    Hero(){
        cout<< "constructor called here---" << endl;
    }    
};

int main(){
    cout<< "before constructor call" <<endl;
    Hero ramesh;
    cout<< "after constructor call" << endl;
}