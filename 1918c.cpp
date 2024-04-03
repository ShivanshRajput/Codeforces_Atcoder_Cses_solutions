#include <iostream>
#include <bit>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        long long a,b,c;
        cin >> a >> b >> c;
        if (a < b)
            swap(a, b);
        long long ans = a - b, cnt = 0, mn = ans;
        for (long long i = 60; i >= 0; i--)
        {
            if (((b >> i) & 1) == 0 && ((a >> i) & 1) == 1 && cnt + (1ll << i) <= c)
            {
                if (ans >= 2 * (1ll << i))
                {
                    cnt += (1ll << i);
                    ans -= 2 * (1ll << i);
                }
                else
                    mn = min(mn, 2 * (1ll << i) - ans);
            }
        }
        cout << min(ans, mn) << "\n";

        // long long a,b,r;
        // cin>>a>>b>>r;
        // if(r==0){
        //     cout<<abs(a-b)<<endl;
        //     continue;
        // }
        // long long mi=min(a,b);
        // long long ma=max(a,b);
        // long long pun= ma&(~mi);
        // pun = pun & (__bit_ceil(r));
        // if(pun<=r){
        //     a=a^pun;
        //     b=b^pun;
        //     cout<<abs(a-b)<<endl;
        // }
        // else{
        //     long long ans=abs( a^pun - b^pun );
        //     for(long long i=pun;i>=r;i--){
        //         ans=min(ans , abs( a^i - b^i ));
        //     }
        //     cout<<ans<<endl;
        // }
        // // cout<<pun<<"----"<<endl;
        // // a=a^pun;
        // // b=b^pun;
        // // cout<<abs(a-b)<<endl;
    }
}