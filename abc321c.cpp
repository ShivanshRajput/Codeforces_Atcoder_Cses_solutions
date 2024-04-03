#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    bool test=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){
            k--;
            if(k<0){
                test=1;
                break;
            }
        }
        if(test){
            break;
        }
    }
    
}