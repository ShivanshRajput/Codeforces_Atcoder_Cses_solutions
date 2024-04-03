#include <iostream>
using namespace std;

// string can_guarantee_coins(int k, int x, long long a) {
//     long long max_losses_allowed = a/x; // Ensure long long arithmetic
//     if (a >= max_losses_allowed) {
//         return "YES";
//     } else {
//         return "NO";
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while(t--){

//     }

//     return 0;
// }

long long next_bet(long long cur_loss, long long k)
{
    return (cur_loss + k - 1) / (k - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long k, x, a;
        cin >> k >> x >> a;
        long long u = 0;

        for (int i = 0;i < x; i++)
        {
            long long v = next_bet(u, k);
            if(v==0){
                u+=1;
            }
            else{
                u+=v;
            }
        }

        if(k * (a - u) > a){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}