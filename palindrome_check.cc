#include<iostream>
using namespace std;
bool ispalindrome(string &str,int start,int end){
    int n=end-start+1;
    if(n==0 || n==1){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return ispalindrome(str,start+1,end-1);
}

int main(){
    string str;
    cin>>str;
    int n=str.size();
    int a=0,b=n-1;
    cout<<ispalindrome(str,a,b);
}