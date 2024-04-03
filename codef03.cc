#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count=0;
        int pos=0;
        for(int i=0;i<n;i++){
            pos=0;
            while(str[i]=='('){
                pos++;
                i++;
            }
            while(str[i]==')'){
                pos--;
                i++;
            }
            if(pos<0){
                count+=abs(pos);
            }
            
        }
        cout<<count<<endl;
    }
}