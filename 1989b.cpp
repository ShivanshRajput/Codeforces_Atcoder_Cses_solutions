#include<bits/stdc++.h>
#include<bit>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long len = b.size();
        for(long i=0;i<b.size();i++){
            long st = i;
            long j = st;
            for(long k=0;k<a.size();k++){
                if(a[k]==b[j]) j++;
                if(j>=b.size()) break;
            }
            len = min(st+(int)b.size()-j , len);
        }
        cout<< len + a.size() <<endl;
    }
}