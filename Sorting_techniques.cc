// https://youtu.be/RfXt_qHDEPw?si=Jay_wToapUEtDrKE

#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// bubble sort gets slower and slower as the list gets longer... complexity O(n2) -- quadratic 
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printArray(arr,n);
}

// Insertion sort is faster if the data is already somehow roughly sorted.... complexity O(n2) -- quadratic
void insertionSort(int arr[] , int n){
    for(int i=1;i<n;i++){
        int j=i;
        int current=arr[j];
        while(j>0 && arr[j-1]>current){
            arr[j]=arr[j-1];    //right shift in the values
            j--;
        }
        arr[j]=current;
    }
    printArray(arr,n);
}

// selection sort means selection of minimun from rest of array and swap with initial value.... complexity O(n2) -- quadratic
void selectionSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    printArray(arr,n);
}





int main(){
    int n;  cout<<"enter size of array\n";
    cin>>n;
    int arr[n];  cout<<"Enter array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    insertionSort(arr,n);
    selectionSort(arr,n);
}