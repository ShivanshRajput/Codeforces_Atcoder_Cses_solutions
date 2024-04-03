#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string com="codeforces";
        int ans = 0;
        for (int i=0;i<10;i++){
            if(str[i] != com[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}