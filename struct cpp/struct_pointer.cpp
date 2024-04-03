#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};

int main(){
    point p={10,20};
    point *ptr = &p;
    cout<< ptr->x <<" "<< ptr->y <<endl;
    ptr->x=30;
    cout<< p.x <<" "<< p.y <<endl;
}