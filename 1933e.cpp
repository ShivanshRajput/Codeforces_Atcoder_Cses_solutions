#include<bits/stdc++.h>
using namespace std;
int sumUpto(int l , int terms){
    int r;
    if(terms<=l){
        r=l-terms;
    }
    else{
        r=terms-l-1;
    }
    int sum = (l*(l+1)/2) - (r*(r+1)/2);
    return sum;
}

int main(){
    cout<<sumUpto(7 , 7)<<endl;
    cout<<sumUpto(7 , 8)<<endl;
    cout<<sumUpto(7 , 9)<<endl;
    cout<<sumUpto(7 , 10)<<endl;
    cout<<sumUpto(7 , 11)<<endl;

}