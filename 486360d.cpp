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
        if(n==1 && str[0]!='W'){
            cout<<"NO\n";
        }
        else{
            if(n==2 && ((str[0]=='W' && str[1]!='W') || (str[1]=='W' && str[0]!='W'))){
                cout<<"NO\n";
            }
            else{
                int i=0;
                int j=n-1;
                while(str[i]=='W'){
                    i++;
                }
                while(str[j]=='W'){
                    j--;
                }
                if(i>j){
                    cout<<"YES\n";
                    continue;
                }
                if((str[i]=='R' && str[i+1]=='B') || (str[i]=='B' && str[i+1]=='R') || (str[j]=='B' && str[j-1]=='R') || (str[j]=='R' && str[j-1]=='B')){
                    bool tst=true;
                    for(int a=i;a<=j;a++){
                        if(str[a+1]=='W' && str[a-1]=='W'){
                            tst=false;
                        }
                    }
                    if(tst){
                        cout<<"YES\n";
                    }
                    else{
                        cout<<"NO\n";
                    }
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
    }
}