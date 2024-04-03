#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int win[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='o'){
                win[i]++;
            }
        }
    }
    vector<pair<int,int>>rnk;
    for(int i=0;i<n;i++){
        int tmp=n-win[i];
        rnk.push_back({tmp,i+1});
    }
    sort(rnk.begin(),rnk.end());
    for(int i=0;i<n;i++){
        cout<<rnk[i].second<<" ";
    }
}