#include<graphics.h>
#include<conio.h>
int main(){
    int gol = DETECT, gm;
    initgraph(&gol , &gm,"C:\\tc\\bgi");
    putPixel(100,200,white);
    closeGraph();
    getch();
}