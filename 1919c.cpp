#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> ans1;
        vector<int> ans2;
        int it=0;
        ans1.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                it++; 
            }
            if((it%2)==0){
                ans1.push_back(v[i]);
            }
            else{
                ans2.push_back(v[i]);
            }
        }

        int pen=0;
        for(int i=1;i<ans1.size();i++){
            
            if(ans1[i]>ans1[i-1]){
                pen++;
            }
        }
        
        for(int i=1;i<ans2.size();i++){
            
            if(ans2[i]>ans2[i-1]){
                pen++;
            }
        }
        
        cout<<pen<<endl;
    }
}