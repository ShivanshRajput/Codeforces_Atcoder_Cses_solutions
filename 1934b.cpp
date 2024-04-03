#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans =n;
         for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        long long sum_val = i * 10 + j * 6 + k * 3 + l * 1;
                        if (n - sum_val >= 0 && (n - sum_val) % 15 == 0) {
                            ans = min(ans, i + j + k + l + (n - sum_val) / 15);
                        }
                    }
                }
            }
        }
    
    cout << ans << endl;
    }
}