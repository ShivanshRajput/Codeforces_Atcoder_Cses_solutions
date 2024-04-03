#include<iostream>
using namespace std;
int a[10][10] , n , indegree[10];

void find_indegree(){
    for (int j=0;j<n;j++){
            int sum=0;
            for (int i=0;i<n;i++){
                sum+=a[i][j];
            }
            indegree[j]=sum;
    }
}

void topology(){
    find_indegree();
    int stack[n];
    int top=-1;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            top++;
            stack[top]=i;
        }
    }
    int k=0;
    int temp[n];
    while(top!=-1){
        int u=stack[top];
        top--;
        temp[k]=u;
        k++;
        for(int j=0;j<n;j++){
            if(a[u][j]==1){
                indegree[j]--;
                if(indegree[j]==0){
                    top++;
                    stack[top]=j;
                }
            }
        }
    }
    cout<<"TOPOLOGICAL SORT\n";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    cout<<"enter number of nodes\n";
    cin>>n;
    cout<<"enter adjancy matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    topology();
    return 0;
}