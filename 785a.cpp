#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            ans+=4;
            continue;
        }
        if(s=="Cube"){
            ans+=6;
            continue;
        }
        if(s=="Octahedron"){
            ans+=8;
            continue;
        }
        if(s=="Dodecahedron"){
            ans+=12;
            continue;
        }
        if(s=="Icosahedron"){
            ans+=20;
            continue;
        }
    }
    cout<<ans<<endl;
}