#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long mdiff=0;
        for(long long i=1;i<n;i++){
            if(n%i==0){
                long long maax=0;
                long long miin=INT_MAX;
                long long diif=0;
                for(long long j=0;j<n-i+1;j+=i){
                    long long ans=0;
                    for(long long k=0;k<i;k++){
                        ans+=arr[j+k];
                    }
                    maax=max(maax , ans);
                    miin=min(miin , ans);
                }
                diif=maax-miin;
                // cout<<diif<<endl;
                mdiff=max(diif , mdiff);
            }
        }
        cout<<mdiff<<endl;
    }
}