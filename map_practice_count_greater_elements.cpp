#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void printGreaterElemnents(int arr[] , int n){
    sort(arr,arr+n);   // O(n log n)
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]=i+1;
    }
}

int main(){
    int arr[]={10,5,8,20,30,8};
    int n=6;

}