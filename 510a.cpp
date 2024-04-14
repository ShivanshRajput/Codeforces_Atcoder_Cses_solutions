#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2){
            if(i%4==1){
                for(int i=0;i<m-1;i++){
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else{
                cout<<"#";
                for(int i=0;i<m-1;i++){
                    cout<<".";
                }
                cout<<endl;
            }
        }
        else{ // body of snake
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
    }
}