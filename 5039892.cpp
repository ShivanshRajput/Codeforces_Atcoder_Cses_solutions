#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> a(n);
        vector<long long> b(n);
        unordered_map<long long, int> xorCount;

        // Input arrays a[] and b[]
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        // Count XORs of h with (i+1) XOR (j+1)
        for (int i = 0; i < n; i++) {
            long long xorValue = h ^ (i + 1);
            for (int j = 0; j < n; j++) {
                xorCount[xorValue ^ (j + 1)]++;
            }
        }

        // Count the pairs satisfying the condition
        long long count = 0;
        for (int i = 0; i < n; i++) {
            long long xorValue = h ^ (i + 1);
            if (xorCount.find(xorValue) != xorCount.end())
                count += xorCount[xorValue];
        }

        cout << count << endl;
    }
    return 0;
}