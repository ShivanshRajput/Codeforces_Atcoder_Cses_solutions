#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%3 == 0){
            cout<<0<<endl;
        }
        else{
            bool one_move = false;
            for(int i=0;i<n;i++){
                if(arr[i]%3 == sum%3 ) one_move = true;
            }
            if((sum+1)%3==0) one_move =true;
            if(one_move){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        

    }
}