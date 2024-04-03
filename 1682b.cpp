#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=INT_MAX;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            if (c!=i){
                j&=c;
            }
        }
        cout<<j<<endl;
    }
}