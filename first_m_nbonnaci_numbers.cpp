#include<iostream>
using namespace std;
void first_m_nbonnaci_nums(int n , int m){
    int arr[m]={0};
    arr[n-1]=1;
    int sum=1;
    for(int i=n ; i<m ; i++){
        arr[i]=sum;
        sum-=arr[i-n];
        sum+=arr[i];
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n , m;
    cin>>n>>m;
    first_m_nbonnaci_nums(n , m);
}