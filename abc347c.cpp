#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n,a,b;
    cin>>n>>a>>b;
    vector<long long> days(n);
    for(int i=0;i<n;i++){
        cin>>days[i];
        days[i]%=(a+b);
    }
    long long mini = *min_element(days.begin() , days.end()) , maxi = *max_element(days.begin() , days.end());
    long long diff = maxi -mini;
    if(diff<a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}