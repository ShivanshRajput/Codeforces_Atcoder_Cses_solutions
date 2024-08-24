#include<bits/stdc++.h>
using namespace std;

int minCost(string &s , int n){
    stack<int> stk;
    stk.push(0);
    int res = 0;
    for(int i=1;i<n;i++){
        if(s[i]=='('){
            stk.push(i);
        }
        else if(s[i]==')'){
            int topEle = stk.top();
            res+=i-topEle;
            stk.pop();
        }
        else{  //  underscore
            if(!stk.empty()){
                int topEle = stk.top();
                res+=i-topEle;
                stk.pop();
            }
            else{
                stk.push(i);
            }
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<minCost(s , n)<<endl;
    }
}