#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    long n=str.size();
    long count=1;
    long mcnt=0;
    for(int i=0;i<n;i++){
        count=1;
        while(str[i+1]==str[i]){
            count++;
            i++;
        }
        if (count>mcnt){
            mcnt=count;
        }
    }
    cout<<mcnt<<endl;
}