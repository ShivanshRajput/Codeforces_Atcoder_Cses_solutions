#include <iostream>
using namespace std;

// nested namespace - can be accessed using multiple scope resolution operators(::) 
namespace Compute{

    namespace String{
        string add(string a,string b){
            return a+b;
        }
    }
    namespace Integer{
        int add(int a, int b){
            return a+b;
        }
    }

}

int main(){
    cout<< Compute::String::add("hello_", "world") <<endl;
    cout<< Compute::Integer::add(56,44) <<endl;
}