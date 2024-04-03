#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(long long arr[], int N)
{
    unordered_set<long long> sumSet;
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
 
        sumSet.insert(sum);
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2){
                arr[i]=-arr[i];
            }
        }
        if(subArrayExists(arr , n)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }


}