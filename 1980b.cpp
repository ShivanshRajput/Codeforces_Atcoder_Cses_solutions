#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f, k;
        cin>>n>>f>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int fav = arr[f-1];
        int greater=0 , equal = 0;
        for(int i : arr){
            if(i>fav){
                greater++;
            }
            else if(i==fav){
                equal++;
            }
        }
        if(greater>=k){
            cout<<"NO\n";
        }
        else if(greater + equal > k){
            cout<<"MAYBE"<<endl;
        }
        else{
            cout<<"YES\n";
        }
        

    }
}