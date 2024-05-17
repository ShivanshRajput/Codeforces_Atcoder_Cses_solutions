#include<iostream>
using namespace std;

class solve{
    public:
        int a;
        int b;

    public: 
        int add(){
            return a + b;
        }
        
        void operator+ (solve &obj){
            int v1 = this -> a;
            int v2 = obj.a;
            cout<<"output : " << v2 - v1 <<endl;
        }

        void operator () () {
            cout<<"---me bracket hu---" << endl;
        }

};

int main(){
    solve obj1 , obj2;
    obj1.a = 3;
    obj2.a = 5;
    obj1 + obj2;

    obj1 ();
}