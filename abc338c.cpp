#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> q(n), a(n) , b(n);
    int fans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int mina=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==0)continue;
        mina=min(mina , q[i]/a[i]);
    }
    int minb=INT_MAX;
    for(int i=0;i<n;i++){
        if(b[i]==0)continue;
        minb=min(minb , q[i]/b[i]);
    }

   // cout<<mina<<" "<<minb<<endl;

   int ans=INT_MAX;
    for(int i=0;i<=mina;i++){
        int temp;
        vector<int> v=q;
        for(int j=0;j<n;j++){
             v[j]=v[j]- i*a[j];
        }

        // for(auto ele: v)
        // cout<<ele<<" ";
        // cout<<endl;

     
        int rat=0;
        for(int k=0;k<n;k++){
            if(b[k]==0)
            continue;
            else
            rat=v[k]/b[k];
 //cout<<"rat"<<rat<<endl;
            ans=min(ans,rat);
        }

       //cout<<i<<" "<<ans<<endl;
         fans=max(fans,ans+i);

         //cout<<fans<<endl;

    }
  cout<<fans<<endl;


}