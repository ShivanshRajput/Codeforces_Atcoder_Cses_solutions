#include<iostream>  
#include<set>

using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    auto it1 = s.lower_bound(30);     // equal or just greater
    auto it2 = s.upper_bound(30);     // just greater
    cout<<(*it1)<<" "<<(*it2)<<endl;
}