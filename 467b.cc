#include<iostream>
#include<bit>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int c;
    cin>>c;
    int ans=0;
    for(int i=0;i<m;i++){
        int diff=c^arr[i];
        if(__popcount(diff)<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
}