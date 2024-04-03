#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin >> n; 
        int sum = 0, odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            int c; 
            cin >> c; 
            sum += c;
            if(c & 1) 
                odd++;
            else 
                even++;
            int r = odd / 3;
            if(even == 0 && odd == 1)
                r = 0;
            else if(odd % 3 == 1)
                r = (odd + 2) / 3;
            cout << sum - r << " ";
        }
        cout << endl;
    }
}