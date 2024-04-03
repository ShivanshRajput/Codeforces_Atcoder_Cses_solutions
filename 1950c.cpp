#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int hrs = stoi(s.substr(0,2));
        // int min = stoi(s.substr(3,2));
        string meridian;
        if (hrs < 12) {
            meridian = "AM";
        }
        else
            meridian = "PM";
        
        hrs%=12;
        if(hrs==0){
            cout<<"12"<<s.substr(2,3);
        }
        else{
            if(hrs <10){
                cout<<"0"<<hrs<<s.substr(2,3);
            }
            else{
                cout<<hrs<<s.substr(2,3);
            }
        }
        cout<<" "<<meridian<<endl;
    }
}