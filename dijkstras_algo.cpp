#include<iostream>

using namespace std;

void dij(int n , int src , int cost[20][20] , int dist[20]){
    int visited[n]={0};  //will be storing visited from src
    for(int i=0;i<n;i++){
        dist[i]=cost[src][i];
    }
    int count=1;
    while(count<n){    // while loop continues untill all nodes are visited
        int min=999;
        int nxt;
        for(int w=0;w<n;w++){
            if(dist[w]<min and !visited[w]){
                min=dist[w];
                nxt=w;
            }
        }
        visited[nxt]=1;
        count++;
        for(int w=0;w<n;w++){
            if((dist[nxt]+cost[nxt][w] < dist[w]) and !visited[w]){
                dist[w]=dist[nxt]+cost[nxt][w];
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of nodes\n";
    cin>>n;
    int cost[20][20];
    cout<<"\nenter cost matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cost[i][j];
            if(cost[i][j]==0){
                cost[i][j]=9999;
            }
        }
    }
    int src;
    cout<<"\nenter the source vertex\n";
    cin>>src;
    int dist[20];
    dij(n,src, cost , dist);
    for(int i=0 ; i<n;i++){
        if(i!=src){
            cout<<src<<"->"<<i<<"  cost = "<<dist[i]<<endl;
        }
    }
}


// 0 4 0 0 0 0 0 8 0 
// 4 0 8 0 0 0 0 11 0 
// 0 8 0 7 0 4 0 0 2 
// 0 0 7 0 9 14 0 0 0 
// 0 0 0 9 0 10 0 0 0 
// 0 0 4 14 10 0 2 0 0 
// 0 0 0 0 0 2 0 1 6
// 8 11 0 0 0 0 1 0 7 
// 0 0 2 0 0 0 6 7 0 

// 0->1  cost = 4
// 0->2  cost = 12
// 0->3  cost = 19
// 0->4  cost = 21
// 0->5  cost = 11
// 0->6  cost = 9
// 0->7  cost = 8
// 0->8  cost = 14


// 0 5 8 0
// 5 0 9 2
// 8 9 0 6
// 0 2 6 0