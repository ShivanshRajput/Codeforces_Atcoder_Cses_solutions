#include<iostream>
#include<vector>
using namespace std;
int maxOccurance(int l[] , int r[] , int n){
    vector<int> arr(1000,0);
    for(int i=0;i<n;i++){     // marked begining of list as +1 and end as -1 
        arr[l[i]]++;          // so on prefix sum, resulting array contains frequencies of elements.
        arr[r[i]+1]--;
    }
    int maxm=arr[0] , resIndex=-1;
    for(int i=1;i<1000;i++){     //doing prefix sum of arr[] and getting the index of maximum element in arr[] 
        arr[i]+=arr[i-1];
        if(maxm<arr[i]){
            maxm=arr[i];
            resIndex=i;
        }   
    }
    return resIndex;
}

int main(){    // driver code
    int n;
    cin>>n;
    int l[n] , r[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    cout<<maxOccurance(l , r , n);
}