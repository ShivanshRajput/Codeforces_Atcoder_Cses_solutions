#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> freq;
    for(char i : s){
        freq[i]++;
    }
    vector<pair<char,int>> v (freq.begin() , freq.end());
    sort(v.begin() , v.end() , greater<pair<int,int>>());
    char maxc;
    int maxi=0;
    for(auto x : v){
        if(x.second >= maxi){
            maxi=x.second;
            maxc=x.first;
        }
    }
    cout<<maxc;
}