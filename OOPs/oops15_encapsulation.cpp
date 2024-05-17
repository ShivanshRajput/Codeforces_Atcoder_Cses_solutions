#include<iostream>
using namespace std;

class student {
    private:
        string name;
        int height;
        int age;
    
    public:
        int getAge(){
            return this->age;
        }
        int getHeight(){
            return this->height;
        }
        string getName(){
            return name;
        }
};

int main(){
    student ramesh;
}