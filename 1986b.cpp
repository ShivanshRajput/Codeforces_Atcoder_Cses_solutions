#include<bits/stdc++.h>
#include<bit>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long mat[n][m];
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long up=0,down = 0,right=0,left=0;
                if(i>0) up = mat[i-1][j];
                if(j>0) left = mat[i][j-1];
                if(i<n-1) down = mat[i+1][j];
                if(j<m-1) right = mat[i][j+1];
                long long curr = mat[i][j];
                if(curr>up && curr>down && curr>left && curr>right){
                    mat[i][j] = max({up,down,right,left});
                }
            }
        }
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}