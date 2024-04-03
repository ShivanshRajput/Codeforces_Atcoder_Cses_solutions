#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool t1=0,t2=0,t3=0,t4=0;
    int n=str.length();
    if (n>=5){
        t1=1;
    }
    for (int i=0;i<n;i++){
        if (str[i]>='a' && str[i]<='z'){
            t2=1;
            continue;
        }
        if (str[i]>='A' && str[i]<='Z'){
            t3=1;
            continue;
        }
        if (str[i]>='0' && str[i]<='9'){
            t4=1;
            continue;
        }
    }
    if (t1 && t2 && t3 && t4){
        cout<<"Correct\n";
    }
    else{
        cout<<"Too weak\n";
    }
}