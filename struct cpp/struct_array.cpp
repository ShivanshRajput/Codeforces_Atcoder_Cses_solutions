#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

int main(){
    point arr[5];   // declaration

    for (int i=0;i<5;i++){   // initialization
        arr[i].x=i;
        arr[i].y=10*i;
    }

    for (int i=0;i<5;i++){   // for output
        cout<<arr[i].x<<" "
            <<arr[i].y<<endl;
    }
}