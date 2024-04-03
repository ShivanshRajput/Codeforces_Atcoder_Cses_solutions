#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>temp;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                temp.push_back(i+1);
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            int idx=-1;
        
            for(int i=0;i<temp.size();i++){
                if(temp[i]>=l ){
                    idx=i;
                    break;
                }
            }
            if(idx>=0 and temp[idx]>0 and temp[idx]<r){
                cout<<temp[idx]<<" "<<temp[idx]+1<<endl;
            }
            else{
                cout<<-1<<" "<<-1<<endl;
            }
        }
        cout<<endl;
    }
}