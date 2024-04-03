#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map <int , int> m;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            m[a[i]]=b[i];
        }
        for(auto it : m){
            cout<<it.first<<" ";
        }
        cout<<endl;
        for(auto it : m){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}