#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back

using namespace std;



signed main() {
  

    long long n;
    cin>> n;

    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
   
    vector<pair<ll,ll>> rocks;
    for(int i=0;i<n;i++){
        rocks.push_back({a[i]*b[i],i});
    }

    vector<ll> ansv;
        stack<pair<ll,ll>> st;
        
        for(auto rockss : rocks)
        {
            if(rockss.first>0) st.push({rockss.first,rockss.second});
                     
            else {                 
                
                    while(!st.empty() && st.top().first>0 && st.top().first<abs(rockss.first)) st.pop();
                
                    if(st.empty() or st.top().first<0) st.push({rockss.first,rockss.second});  
                    else if(st.top().first + rockss.first==0) st.pop();   
                }
            }       
        
        while(!st.empty())
        {
            ansv.push_back(st.top().second);
            st.pop();
        }
        for(int i=ansv.size()-1;i>=0;i--){
            cout<<ansv[i]<<" ";
        }
        
        cout<<endl;
 
}
