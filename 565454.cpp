#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int a1,a2,b1,b2;
	    cin>>a1>>a2>>b1>>b2;
	    int c=a1-a2+b1-b2;
	    c*=-1;
	    if (c>0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
