#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long house = 1;
    long long time = 0;
    for(int i=0;i<m;i++){
        long long task;
        cin>>task;
        if(task>=house){
            time+=task - house;
        }
        else{
            time+=n-(house - task);
        }
        house = task;
    }
    cout<<time<<endl;
}