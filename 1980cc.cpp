#include <bits/stdc++.h>   
              

#define int long long      
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back 

#define lld long double
#define mii map<int, int> 
#define pii pair<int, int>
#define ll long long 
#define ff first
#define ss second 
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=x; i<y; i++)    
#define countbits(x) __builtin_popcountll(x)

using namespace std;

lld pi=3.1415926535897932;
int lcm(int a, int b)
{
    int g=__gcd(a, b);
    return a/g*b;
}
int power(int a, int b, int p)
    {
        if(a==0)
        return 0;
        int res=1;
        a%=p;
        while(b>0)
        {
            if(b&1)
            res=(1ll*res*a)%p;
            b>>=1;
            a=(1ll*a*a)%p;
        }
        return res;
    }




int32_t main()
{
    IOS
    int t;
    cin>>t;
    // t=1;
    while(t--){
    //    int n; cin>>n;
    //    vector<int> v;
    //      for(int i=0; i<n; i++)
    //      {
    //           int x; cin>>x;
    //           v.pb(x);
    //      }

      int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int m;
        cin >> m;
        vector<int> d(m);
        for(int i=0; i<m; i++) cin >> d[i];


       multiset<int> st;
       for(int i=0; i<n; i++){
            if(a[i]!=b[i]) st.insert(b[i]);
       }

      multiset<int> present;
      for(int i=0; i<n; i++){
        present.insert(b[i]);
      }
        
      bool f=false;

        for(int i=0; i<m; i++){
            if(st.find(d[i])!=st.end()){
                st.erase(st.find(d[i]));
                present.insert(d[i]);
                f=true;
            }
            else if(present.find(d[i])!=present.end()){
                //present.erase(present.find(d[i]));
                f=true;
            }
            else{
                f=false;
            }
          //  cout<<i<<" "<<f<<endl;
        }

        if(st.size()==0 && f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

       

         
        
    }


    return 0;
}