#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long freq[n]={0};
    for(int i=0;i<n-1;i++){
        int t;
        cin>>t;
        freq[t-1]++;
    }
    for(int i=0;i<n;i++){
        if(freq[i]==0){
            cout<<i+1;
            break;
        }
    }
}