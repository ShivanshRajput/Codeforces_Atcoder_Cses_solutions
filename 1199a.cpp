#include<iostream>
using namespace std;

bool notSoRainy(int day , int arr[] , int n, int x,int y){
    for(int i=day-1; i>=0 && i>=day-x ; i--){
        if(arr[day]>=arr[i]) return false;
    }
    for(int i=day+1;i<n && i<=day+y;i++){
        if(arr[day]>=arr[i]) return false;
    }
    return true;
}

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(notSoRainy(i , arr , n ,x ,y)){
            cout<<i+1;
            break;
        }
    }
}