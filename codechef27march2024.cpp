#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,k,x;
	    cin>>n>>k>>x;
	    long long num = 1<<(k-1);
	    if(x<num){
	        cout<<"No\n";
	    }
	    else{
	        if(k>n){
	            cout<<"No\n";
	        }
	        else{
	            cout<<"Yes\n";
	        }
	    }
	}
}
