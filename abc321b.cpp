#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    n--;
    int arr[n];
    int sum=0;
    int min=101;
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    sum-=min;
    sum-=max;
    x-=sum;
    // cout<<sum<<"  "<<x<<"  "<<min;
    if(x<=max && x>min){
        cout<<x<<endl;
    }
    else if(x<=min){
        cout<<0<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}