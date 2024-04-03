#include <iostream>
using namespace std;

namespace Multiply{
    int compute (int a,int b){
        return a*b;
    }
}

namespace Addition{
    int compute (int a, int b){
        return a+b;
    }
}

int main(){
    int x=5,y=6;

    // using compute() function from namespace Multiply
    cout<< Multiply :: compute(x,y)<<endl;

    // using compute() function from namespace Addition
    cout<< Addition :: compute(x,y)<<endl;

}