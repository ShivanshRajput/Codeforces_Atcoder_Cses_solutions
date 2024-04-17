#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        n = n*(n+1)/2;
        int c =s[0]-'0';
        c--;
        c*=10;
        cout<<c+n<<endl;
    }
}