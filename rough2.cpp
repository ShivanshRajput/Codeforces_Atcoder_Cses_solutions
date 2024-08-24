#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    // x is not used, so we can remove it
    int x;
    cin >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Preprocessing: Calculate prefix distinct counts
    vector<unordered_map<int, int>> prefixDistinct(n + 1);
    for (int i = 0; i < n; i++) {
        prefixDistinct[i + 1] = prefixDistinct[i]; 
        prefixDistinct[i + 1][arr[i]]++;
    }

    int total = 0;
    while (q--) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        // Optimize distinct count calculation using prefix sums
        int distinctBefore = prefixDistinct[u].size(); // Distinct before u
        int distinctAfter = prefixDistinct[n].size(); // Distinct in total
        for (auto& p : prefixDistinct[v + 1]) {
            if (prefixDistinct[n][p.first] > p.second) { 
                distinctAfter--; // Remove if present after v
            }
        }
        total += distinctBefore + distinctAfter; 
    }
    cout << total;
    return 0;
}
