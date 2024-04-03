#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p,q,r;
        cin>>p>>q>>r;
        char xorr=0;
        for(int i=0;i<3;i++){
            if(p[i]!='?'){
                xorr^=p[i];
            }
            if(q[i]!='?'){
                xorr^=q[i];
            }
            if(r[i]!='?'){
                xorr^=r[i];
            }
        }
        cout<<(char)(xorr+'A'-1)<<endl;
    }

}