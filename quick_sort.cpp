#include<iostream>
using namespace std;

int partition(int arr[] , int low , int high){
    int pivot=arr[low];
    int i=low , j=high;
    while(i<j){
        do{i++;}
        while(arr[i]<=pivot);
        do{j--;}
        while(arr[j]>pivot);
        if(i<j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j;
}

void quickSort(int arr[] , int low , int high){
    if(low<high){
        int j=partition(arr , low , high);
        quickSort(arr , low , j);
        quickSort(arr , j+1 , high);
    }
}


int main() {
    cout<<"Enter size of array\n";
    int n; cin>>n; int arr[n+1];
    arr[n]=INT_MAX;
    cout<<"Enter Array\n";
    for(int i=0;i<n;i++){ cin>>arr[i]; }
    cout<<"Sorted array after quickSort\n";
    quickSort(arr , 0 , n);
    for(int i=0;i<n;i++){ cout<<arr[i]<<" "; }
    cout<<endl;
    return 0;
}