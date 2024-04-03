#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<( *max_element (v.begin(), v.end()))-( *min_element(v.begin() , v.end()))<<endl;
    }
}