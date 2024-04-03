// constructor functions in struct

#include<stdio.h>


struct point{
    int x;
    int y;
    point(int a, int b){
        x=a;
        y=b;
    }
    void printpt(){
        printf("%d_%d",x,y);
    }
};
// driver code
int main(){
    struct point p(52,90);
    p.printpt();


}