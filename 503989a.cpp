#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long h;
        cin >> n >> h;
        vector<long long> a(n);
        vector<long long> b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        unordered_map<long long, int> xorCountsA, xorCountsB;

        for(int i = 0; i < n; i++) {
            xorCountsA[a[i] ^ (i+1)]++;
            xorCountsB[b[i] ^ (i+1)]++;
        }

        long long count = 0;
        for(auto it = xorCountsA.begin(); it != xorCountsA.end(); ++it) {
            long long xorValue = it->first;
            count += (long long)it->second * xorCountsB[h ^ xorValue];
        }

        cout << count << endl;
    }
    return 0;
}
