#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  bool test=0;
  int m=-1;
  while(n){
    if(m>=n%10){
      test=1;
      break;
    }
    m=n%10;
    n/=10;
  }
  if(test){
    cout<<"No\n";
  }
  else{
    cout<<"Yes\n";
  }
}