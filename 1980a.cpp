#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        unordered_map<char ,int> freq;
        for(auto i:s){
            freq[i]++;
        }
        int problems=0;
        for(char c='A' ; c<='G';c++){
            problems+=max(m-freq[c] , 0);
        }
        cout<<problems<<endl;

    }
}