#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        char arr[11][11];
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        int score=0;
        for (int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(arr[i][j]=='X'){
                    score+=(min(i,j)+1);
                }
            }
            for(int j=5;j<10;j++){
                if(arr[i][j]=='X'){
                    score+=(min(i,9-j)+1);
                }
            }
        }
        for (int i=5;i<10;i++){
            for(int j=0;j<5;j++){
                if(arr[i][j]=='X'){
                    score+=(min(9-i,j)+1);
                }
            }
            for(int j=5;j<10;j++){
                if(arr[i][j]=='X'){
                    score+=(min(9-i,9-j)+1);
                }
            }
        }
        cout<<score<<endl;
    }
}