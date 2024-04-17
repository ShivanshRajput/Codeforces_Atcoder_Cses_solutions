#include<iostream>
using namespace std;
int main(){
    int pages;
    cin>>pages;
    int days[7];
    for(int i=0;i<7;i++){
        cin>>days[i];
    }
    int i = 0;
    while(pages>0){
        pages-=days[i];
        i = (i+1)%7;
    }
    if(i==0){
        cout<<7<<endl;
    }
    else{
        cout<<i<<endl;
    }
}