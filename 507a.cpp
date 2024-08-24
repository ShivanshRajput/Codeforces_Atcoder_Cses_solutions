#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v[i] = {c,i+1};
    }
    sort(v.begin() , v.end());
    vector<int>instruments;
    for(auto &it : v){
        int time = it.first;
        int index = it.second;
        if(k>=time){
            instruments.push_back(index);
            k-=time;
        }
    }
    cout<<instruments.size()<<"\n";
    for(int & it: instruments){
        cout<<it<<" ";
    }
}