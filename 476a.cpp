#include<iostream>
using namespace std;

int  main(){
    int n , m;
    cin>>n>>m;
    int min_steps = n/2 + n%2;
    int max_steps = n;
    for(int i=min_steps; i<=max_steps ; i++){
        if(i%m==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}