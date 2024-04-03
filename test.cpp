// count set bits

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums, int x , int low ,int high){
        if(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(nums[mid]<x){
                return binarysearch(nums , x , mid+1 , high );
            }
            else{
                return binarysearch(nums , x , low , mid-1 );
            }
        }
        return -1;
    }
int main (){
    // int n;
    // cin>>n;
    // int count=0;
    // while(n!=0){
    //     if(n&1){
    //         count++;
    //     }
    //     n>>=1;
    // }
    // cout<<count<<endl;
    int n;
    cin>>n;
    vector<int>vec;
    while (n--){
        int c;
        cin>>c;
        vec.push_back(c);
    }
    cout<<"Target : ";
    int x;
    cin>>x;
    cout<<binarysearch(vec , x , 0 , vec.)
}

