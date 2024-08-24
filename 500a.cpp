#include<iostream>
#include<vector>
using namespace std;

bool dfs(int node , vector<int>&next , int target , vector<bool>&visited){
    if(visited[node] || node == -1) return false;
    if(node == target) return true;
    visited[node] = true;
    return dfs(next[node] , next , target , visited );
}

int main(){
    int n, target;
    cin>>n>>target;
    vector<int>next(n+1 , -1);
    vector<bool>visited(n+1 , false);
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        next[i] = i + x;
    }
    if(dfs(1 , next , target , visited )){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}