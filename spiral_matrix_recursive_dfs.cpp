#include<iostream>
#include<vector>
using namespace std;

void dfs(int i,int j, vector<vector<char>> &mat){
    mat[i][j] = '+';
    if(j<mat[0].size()-1 && mat[i][j+1]=='u'){
        mat[i][j]='>'; 
        dfs(i,j+1,mat);
    } 
    if(i< mat.size()-1 && mat[i+1][j]=='u'){
        mat[i][j]='v'; 
        dfs(i+1,j,mat);
    } 
    if(j>0 && mat[i][j-1]=='u'){
        mat[i][j]='<'; 
        dfs(i,j-1,mat);
    } 
    if(i>0 && mat[i-1][j]=='u'){
        mat[i][j]='^'; 
        dfs(i-1,j,mat);
    } 
}

int main(){
    int n;
    cin>>n;
    vector<vector<char>> spiral(n,vector<char>(n,'u'));
    dfs(0,0,spiral);
    for(vector<char> &vec : spiral){
        for(char i: vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}