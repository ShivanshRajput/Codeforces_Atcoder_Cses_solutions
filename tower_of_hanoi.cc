#include<iostream>
using namespace std;
void toh(char a, char b, char c, int n){
    if(n==1){
        cout<<a<<"-->"<<b<<" disc "<<n<<endl;
        return;
    }
        toh(a,c,b,n-1);
        cout<<a<<"-->"<<b<<" disc "<<n<<endl;
        toh(c,b,a,n-1);
    
}

int main(){
    int n;
    cin>>n;
    toh('A','B','C',n);
}