#include<bits/stdc++.h>
using namespace std;

long long pwr(int bs, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= bs;
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_set<int> count;
        long a,b,l;
        cin>>a>>b>>l;
        for(int x=0; pwr(a,x)<=l ; x++ ){
            for(int y=0; pwr(b,y)*pwr(a,x) <=l ; y++){
                int val = (pwr(b,y)*pwr(a,x));
                if(l%val == 0) count.insert(l/val);
            }
        }
        cout<<count.size()<<endl;
    }
}