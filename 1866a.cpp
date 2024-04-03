#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min=INT_MAX;
    while (n--){
        int tmp;
        cin>>tmp;
        if (abs(tmp)<min)
            min=abs(tmp);
    }
    cout<<min;
}