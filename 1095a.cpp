#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int iter =1;
    for(int i=0;i<s.size();i+=iter){
        ans = ans + s[i];
        iter++;
    }
    cout<<ans<<endl;
}