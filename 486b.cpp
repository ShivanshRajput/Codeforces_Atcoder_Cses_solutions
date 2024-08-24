#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int rowSum[n] = {0};
    int colSum[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                rowSum[i]++;
                colSum[j]++;
            }
        }
    }
    bool flag = true;
    int ans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                ans[i][j] = 0;
                continue;  
            } 
            if(rowSum[i]==m && colSum[j]==n){
                ans[i][j] = 1;
            }
            else if((rowSum[i]==m || colSum[j]==n)){
                ans[i][j] = 0;
            }
            else{
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"NO";
    }
}