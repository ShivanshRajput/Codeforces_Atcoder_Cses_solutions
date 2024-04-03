#include <bits/stdc++.h>
using namespace std;

int mirror(int a , int k){
    int ans=0;
    while (k--){
        // cout<<"K="<<k<<endl;
        ans+=(a&1)*pow(2,k);
        a>>=1;
    }
    return ans;
}

int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int k;
// 	    string str;
// 	    string ans;
// 	    cin>>k>>str;
// 	    int n=pow(2,k);
// 	    for (int i=0;i<n;i++){
// 	        ans[i]=str[mirror(i,k);
// 	    }
	    
// 	}

    for (int i=0;i<16;i++){
        cout<<i<<" - "<<mirror(i,4)<<endl;
    }
	return 0;
}
