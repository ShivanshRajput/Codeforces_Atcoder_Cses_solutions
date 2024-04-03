#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string ans="";
        for(int i=0;i<k;i++){
            ans+=char('a'+i);
        }
        string fans="";
        while(n--){
            fans+=ans;
        }
        cout<<fans<<endl;
    }
}