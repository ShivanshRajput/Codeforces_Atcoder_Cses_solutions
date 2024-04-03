#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i] = b-a;
        if(i!=0){
            v[i]+=v[i-1];
        }
    }
    cout<< *max_element(v.begin() , v.end()) <<endl;
}