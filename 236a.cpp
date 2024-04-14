#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char>st(str.begin() , str.end());
    if(st.size()%2){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }   
}