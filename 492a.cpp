#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height = 0;  // height currently forming
    int used = 0;  // blocks used upto here
    int level = 0;  // blocks in one level
    while(used<=n){
        height++;
        level +=height;
        used+=level;
    }
    cout<<height-1<<endl;
}