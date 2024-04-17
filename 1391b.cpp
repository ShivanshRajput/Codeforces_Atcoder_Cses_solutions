#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){  // checking rightmost column
            if(arr[i][m-1] == 'R') cnt++;
        }
        for(int i=0;i<m-1;i++){  // checking rightmost column
            if(arr[n-1][i] == 'D') cnt++;
        }
        cout<<cnt<<endl;
    }
}