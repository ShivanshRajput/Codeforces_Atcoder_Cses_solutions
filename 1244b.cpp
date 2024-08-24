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
        int low = 0;
        while(s[low]=='0' && low<n) low++;
        int high = n-1;
        while(s[high]=='0' && high>=0) high--;
        if(low>high){
            cout<<n<<"\n";
        }
        else{
            cout<<2*max(n-low,high+1)<<"\n";
        }
    }
    return 0;
}