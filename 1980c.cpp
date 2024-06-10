#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        multiset<int>st ,st2 ;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }            
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if(b[i]!=a[i]){
               st.insert(b[i]); 
            } 
            st2.insert(b[i]);
        }
        int m;
        cin>>m;
        vector<int> c(m);
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        
        bool flag = false;
        
        for(int i=0;i<m;i++){
            if(st.find(c[i]) != st.end()){
                st.erase(st.find(c[i]));
                st2.insert(c[i]);
                flag = true;
                
            }
            else if(st2.find(c[i])!=st2.end()){
                flag = true;
            }
            else{
                flag = false;
            }
            
        }
        if(st.size() == 0 && flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}