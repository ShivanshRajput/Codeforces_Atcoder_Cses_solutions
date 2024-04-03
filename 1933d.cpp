// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int minEle = *min_element(v.begin() , v.end());
//         int freq = count(v.begin() , v.end() , minEle);
//         bool is_div = true;
//         for(int i=0;i<n;i++){
//             if(v[i]%minEle != 0) is_div=false;
//         }
//         if(is_div and freq>=2) cout<<"NO\n";
//         else cout<<"YES\n";
//     }
// }

