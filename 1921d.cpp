#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> a(n);
        vector<long long> b(m);
        long long mina=INT_MAX;
        long long maxa=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mina=min(mina , a[i]);
            maxa=max(maxa , a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        // sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        if(mina>b[0] and maxa<b[n-1]){
            sort(a.begin() , a.end());
        }
        int p=0 , q=m-1;
        long long dif=0;
        for(int i=0;i<n;i++){
            
            if(abs(a[i]-b[p])>=abs(a[i]-b[q])){
                dif+=abs(a[i]-b[p]);
                p++;
            }
            else{
                dif+=abs(a[i]-b[q]);
                q--;
            }
        }
        cout<<dif<<endl;
    }
}
