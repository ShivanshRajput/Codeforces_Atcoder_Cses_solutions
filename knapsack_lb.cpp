#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int> & weight , vector<int> & price , int index , int capacity ,vector< vector<int> > & dp){
    if(index==0){
        if(weight[0] <= capacity){
            return price[0];
        }
        else{
            return 0;
        }
    }

    if(dp[index][capacity] != -1)
        return dp[index][capacity];
    
    int include=0;
    if(weight[index] <= capacity)
        include = price[index] +  knapsack(weight , price , index-1 , capacity - weight[index] , dp);
    
    int exclude = 0 + knapsack(weight , price , index-1 , capacity ,dp);
    
    dp[index][capacity] = max(exclude , include);
    return dp[index][capacity];
}   

int main(){
    vector<int> wt = {1,2,4,5};
    vector<int> prc ={5,4,8,6};
    int cap=5;
    int n=4;
    vector< vector<int> > dp ( n , vector<int>(cap+1 , -1));
    cout<<knapsack(wt , prc , n-1 , cap , dp)<<endl;
    
}