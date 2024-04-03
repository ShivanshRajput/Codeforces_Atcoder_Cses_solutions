#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> g;
    for (int i = n; i >= 1; i--) {
        g.push_back({i, 0});
    }

    int currentPos = n - 1;  // Keep track of the current position

    while (q--) {
        int p;
        cin >> p;
        if (p == 1) {
            char c;
            cin >> c;
            if (c == 'U') {
                int x,y;
                x=g[currentPos].first;
                y=g[currentPos].second + 1;
                currentPos = (currentPos + 1) % n;
                g[currentPos]={x,y};
            } else if (c == 'D') {
                int x,y;
                x=g[currentPos].first;
                y=g[currentPos].second - 1;
                currentPos = (currentPos + 1) % n;
                g[currentPos]={x,y};
            } else if (c == 'L') {
                int x,y;
                x=g[currentPos].first-1;
                y=g[currentPos].second;
                currentPos = (currentPos + 1) % n;
                g[currentPos]={x,y};
            } else if (c == 'R') {
                int x,y;
                x=g[currentPos].first+1;
                y=g[currentPos].second;
                currentPos = (currentPos + 1) % n;
                g[currentPos]={x,y};
            }
        } else {
            int v;
            cin >> v;
            cout << g[(currentPos+n-v+1)%n].first << " " << g[(currentPos+n-v+1)%n].second << endl;
        }
    }

    // Output the final state
    // for (const auto &elem : g) {
    //     cout << elem.first << " " << elem.second << endl;
    // }
}
