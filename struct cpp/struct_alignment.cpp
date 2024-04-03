// struct allignment and padding.... 

#include<iostream>
using namespace std;

struct S1{       // size 16 bytes
    char c1;
    char c2;
    double d1;
};

struct S2{      // size 24 bytes
    char c1;
    double d1;
    char c2;
};

struct S3{      // size 16 bytes
    double d1;
    char c2;
    char c1;
};

//Miscellaneous: compact representation of structures... no padding is done
struct S4{
    char c1;
    double d1;
    char c2;
}__attribute__((packed));

int main (){
    cout<<"size of S1 : "<<sizeof(S1)<<endl
        <<"size of S2 : "<<sizeof(S2)<<endl
        <<"size of S3 : "<<sizeof(S3)<<endl
        <<"size of packed : "<<sizeof(S4)<<endl;
}

