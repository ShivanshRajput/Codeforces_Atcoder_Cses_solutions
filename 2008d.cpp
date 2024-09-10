#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> color(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--; 
    }
    string s;
    cin >> s;
    
    vector<bool> visited(n, false);
    vector<int> res(n, 0);
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            vector<int> cycle;
            int cur = i;
            
            while (!visited[cur]) {
                visited[cur] = true;
                cycle.push_back(cur);
                cur = p[cur];
            }
            
            int black_count = 0;
            for (int node : cycle) {
                if (s[node] == '0') {
                    black_count++;
                }
            }
            
            for (int node : cycle) {
                res[node] = black_count;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
