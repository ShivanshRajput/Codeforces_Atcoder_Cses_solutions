#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odds=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2) odds++;
        }
        if(odds!=n and odds != 0){  // mix of odds and evens thus can be modified;
            cout<<"YES\n";
            continue;
        }
        if(odds == 0){  // all evens thus cant be modified to sum to be odd
            cout<<"NO\n";
            continue;
        }
        if(odds == n){
            if(n%2){  // already sum up to odd
                cout<<"YES\n";
            }
            else{    // always sum up to even 
                cout<<"NO\n";
            }
        }

    }
}