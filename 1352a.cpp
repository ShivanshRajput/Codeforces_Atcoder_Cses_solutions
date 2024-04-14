#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int mult=1;
        while(n>0){
            if(n%10 !=0) ans.push_back((n%10)*mult);
            n=n/10;
            mult=mult*10;
        }
        cout<<ans.size()<<endl;
        for(auto a:ans){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}