#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
  
  int count1=0;
  int count2=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
      count1++;
    }
    else{
      count2++;
    }
  }
  if(count2==s.length()){
    cout<<0<<endl;
  }
  else if(count1==s.length()){
    cout<<1<<endl;
  }
  else{
    cout<<min(min(count1 , count2) , 2)<<endl;
  }
}
    return 0;
} 