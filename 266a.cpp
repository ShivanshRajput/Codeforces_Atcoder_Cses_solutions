#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;
}