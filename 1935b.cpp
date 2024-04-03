#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> crr(n);
        for(int i=0;i<n;i++){
            cin>>crr[i];
        }
        vector<int> arr = crr;
        sort(arr.begin() , arr.end());
        int mex = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == mex) mex++;
        }
        int num;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                num = arr[i];
                break;
            }
        }
        int idx;
        for(int i=0;i<n-1;i++){
            if(crr[i]==num) idx = i+1;
        }
        
        if(mex>=n){
            cout<<-1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<idx<<endl;
            cout<<idx+1<<" "<<n<<endl;
        }
    }
}