#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>mov1(n);
        vector<int>mov2(n);
        for(int i=0;i<n;i++){
            cin>>mov1[i];
        }
        for(int i=0;i<n;i++){
            cin>>mov2[i];
        }
        int rev1 = 0 , rev2 = 0;
        for(int i=0;i<n;i++){
            if(mov1[i]>mov2[i]){
                rev1 += mov1[i];
            }
            else if(mov1[i]==mov2[i]){
                if(mov1[i]==-1){
                    if(rev1<rev2){
                        rev2 += mov2[i];
                    }
                    else{
                        rev1 += mov1[i];
                    }
                }
                else{
                    if(rev1<rev2){
                        rev1 += mov1[i];
                    }
                    else{
                        rev2 += mov2[i];
                    }
                }
            }
            else{
                rev2 += mov2[i];
            }
        }
        cout<<min(rev1,rev2)<<endl;
    }
}