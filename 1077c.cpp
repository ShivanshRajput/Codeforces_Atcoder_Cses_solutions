#include<iostream>
#include<vector>
#include <numeric>
#include<unordered_map>
using namespace std;

#define ll long long 

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    ll sum=accumulate(arr.begin() , arr.end() , 0ll);
    int idx=0;
    vector<int>ans;
    for(int &i:arr){
         ll find=sum-i;
         if(find%2==0 and mp[(find/2)]>0){
            if((find/2)==i and mp[i]==1){
                continue;
            }
            ans.push_back(idx+1);
         }
         idx++;
    }
    cout<<ans.size()<<endl;
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

}