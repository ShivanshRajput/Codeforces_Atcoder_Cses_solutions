#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> graph(20,vector<int>(20,0));

void DFS(vector<vector<int>>& graph, int currentNode, vector<int>& visited) {
    visited[currentNode] = 1;
    cout<<currentNode<<"_";
    for (int i = 0; i < graph.size(); i++) {
        if (graph[currentNode][i] && !visited[i]) {
            DFS(graph, i, visited);
        }
    }
}


void BFS(vector<vector<int>> & graph , int curr){
    int n=graph.size();
    vector<int> visited(n,0);
    queue<int> q;
    q.push(curr);
    visited[curr]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<n;i++){
            if(graph[u][i] !=0 and !visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
}


int main(){
    int n;
    cout<<"enter no of nodes\n";
    cin>>n;
    cout<<"\nenter adjancy matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    int src;
    cout<<"enter source\n";
    cin>>src;
    BFS(graph , src);
    cout<<endl;
    vector<int> visited(n,0);
    DFS(graph , src , visited);
}


// 0 1 0 1 0 0 0
// 1 0 1 1 0 1 0
// 0 1 0 1 1 1 0
// 1 1 1 0 1 0 0
// 0 0 1 1 0 0 1
// 0 1 1 0 0 0 0
// 0 1 0 0 1 0 0 