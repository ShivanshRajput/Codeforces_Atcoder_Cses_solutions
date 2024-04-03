#include <iostream>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    char str[n];
	    bool flag=0;
	    for (long i=0;i<n;i++){
	        cin>>str[i];
	        if (str[i]=='1' && flag==0){
	            flag=1;
	            cout<<1;
	            continue;
	        }
	        cout<<0;
	    }
	    cout<<endl;
	}
	return 0;
}
