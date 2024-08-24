#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int low = 0 , high = n-1;
        bool flag = true;
        while(low<high){
            if(abs(s[low]-s[high])==0 || abs(s[low]-s[high])==2){
                low++;
                high--;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}