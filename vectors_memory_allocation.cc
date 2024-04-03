#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<15;i++){
        cout<<v.capacity    ()<<" -- ";
        v.push_back(i*i);
        cout<<v[i]<<endl;
    }
}