#include<iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w; 
        }

};

class male: public human{
    public: 
        string name;
};

int main(){
    male deepak;
    deepak.name = "DEEPAK";
    deepak.age = 45;
    deepak.height = 165;
    deepak.weight = 84;
}
