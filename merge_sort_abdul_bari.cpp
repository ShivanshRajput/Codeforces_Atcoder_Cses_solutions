#include<iostream>
using namespace std;

void merge(int arr[],int low ,int mid, int high){
    int i=low, j=mid+1, k=0, temp[high-low+1];
    while(i<=mid and j<=high){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    for(;i<=mid;i++){
        temp[k++]=arr[i];
    }
    for(;j<=high;j++){
        temp[k++]=arr[j];
    }
    for(i=0;i<high-low+1;i++){
        arr[low+i]=temp[i];
    }
}

void mergeSort(int arr[] , int low , int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid+1 , high);
        merge(arr , low , mid , high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,h=n-1;
    mergeSort(arr , l , h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}