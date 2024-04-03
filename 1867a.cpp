#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int w=n;
        int i;
        int ans[n]={0};
        ans[0]=w;
        w--;
        for (i=0;i<n-1;i++){
            if (arr[i+1]>=arr[i] ){
                ans[i+1]=w;
                w--;
            }
        }
        
        for(i=n-1 ; i>0 ;i--){
            if (arr[i-1]>arr[i] ){
                ans[i]=w;
                w--;
            }
        }
        for (int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}


/*
3
1
100000
5
1 4 5 5 2 
3
10 3 3



*/