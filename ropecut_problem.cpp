#include<iostream>
using namespace std;
int max(int a, int b,int c){
    if(a>=b){
        if(a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>=c){
            return b;
        }
        else{
            return c;
        }
    }
}


int ropecut(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res;
    res=max(ropecut(n-a,a,b,c) , ropecut(n-b,a,b,c) ,ropecut(n-c,a,b,c) );
    if(res==-1){
        return -1;
    }
    return 1+res;
}



int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<ropecut(n,a,b,c);
}