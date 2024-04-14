#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l;
    int limes = c*d;
    int salt = p;
    int req_drink = n*nl;
    int req_limes = n*1;
    int req_salt = n*np;
    cout<<min(drink/req_drink , min(limes/req_limes , salt/req_salt));
}