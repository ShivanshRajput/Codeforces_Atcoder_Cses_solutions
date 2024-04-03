#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int x,y,n;
        cin>>x>>y>>n;
        if ((n*(n-1))/2 > y-x){
            cout<<-1<<endl;
            continue;
        }
        cout<<x<<" ";
        while (n-->2){
            cout<<y-(n)*(n-1)/2<<" ";
        }
        cout<<y<<endl;
    }
}
