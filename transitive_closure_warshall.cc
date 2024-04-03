#include<iostream>
using namespace std;
int n, a[10][10] , p[10][10];

void path(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p[i][j]=a[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(p[i][k]==1 and p[k][j]==1){
                    p[i][j]=1;
                }
            }
        }
    }
}
int main(){
    cout<<"Enter no of nodes\n";
    cin>>n;
    cout<<"enter adjacency matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    path();
    cout<<"the path matrix is shown below\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 1 0 0 
// 1 0 0 0 0 0 
// 1 1 0 0 0 0 
// 1 0 1 0 0 0

// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 1 0 0 1 0 0
// 1 0 0 0 0 0
// 1 1 0 0 0 0
// 1 0 1 1 0 0