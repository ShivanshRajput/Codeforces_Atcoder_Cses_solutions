#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int index=-2;
    for(int i=0;i<n-2;i++){
        if(str[i]=='A' && str[i+1]=='B' && str[i+2]=='C'){
            index=i;
            break;
        }
    }
    cout<<index+1<<endl;
}