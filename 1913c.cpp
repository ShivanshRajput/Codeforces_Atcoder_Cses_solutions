#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    vector<int>freq(32, 0);
    while (t--){
        long long a,b;
        cin>>a>>b;
        if(a==1){
            freq[b]++;
        }
        else{
            vector<int>temp=freq;
            bool flag=true;
            int i=0;
            while(i<30){
                if((b>>i) & 1){
                    if(temp[i]){
                        temp[i]--;
                    }
                    else{
                        flag=false;
                    }
                }
                temp[i+1] += temp[i]/2;
                i++;
            }
            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}