#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        while(n--){
            int c;
            cin>>c;
            sum+=abs(c);
        }
        cout<<sum<<endl;
    }
}