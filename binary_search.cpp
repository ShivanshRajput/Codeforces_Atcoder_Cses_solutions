#include<iostream>
using namespace std;
int binarySearchRecursive(int arr[] , int low , int high , int x){
    if(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
            return binarySearchRecursive(arr , mid +1 , high , x);
        }
        else{
            return binarySearchRecursive(arr , low , mid-1 , x);
        }
    }
    return -1;
}

int binarySearchIterative(int arr[] , int low , int high , int x){
    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search index of : ";
    int x;
    cin>>x;
    cout<<"Index of "<<x<< " : "<<binarySearchRecursive(arr , 0 , n-1 , x)<<endl;
    cout<<"Index of "<<x<< " : "<<binarySearchIterative(arr , 0 , n-1 , x)<<endl;
}