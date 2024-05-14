#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%2==0){ // streetlights can be put lengthwise.
            cout<<(n/2)*m<<endl;
        }
        else if(m%2==0){  // streetlights can be put breadthwise.
            cout<<(m/2)*n<<endl;
        }
        else{
            cout<<(m/2)*n + n/2 + n%2<<endl;
        }
    }
}