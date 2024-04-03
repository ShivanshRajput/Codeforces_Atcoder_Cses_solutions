#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>
using namespace std;

long dist(pair<long, long> a, pair<long, long> b) {
    return ((b.first - a.first) * (b.first - a.first)) + ((b.second - a.second) * (b.second - a.second));
}

pair<double, double> midp(pair<long, long> a, pair<long, long> b) {
    return make_pair((b.first + a.first) / 2.0, (b.second + a.second) / 2.0);
}

bool are_close(double a, double b, double tol = 1e-9) {
    return abs(a - b) < tol;
}

// Hash function for unordered_set
struct HashFunction {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};

int main() {
    int n;
    cin >> n;

    vector<pair<long, long>> v;
    for (int i = 0; i < n; i++) {
        long a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    unordered_set<pair<int, int>, HashFunction> seen;  // To handle duplicate sets (A, B, C) and (C, A, B)

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j) {
                        pair<double, double> midpoint = midp(v[i], v[k]);
                        if (are_close(midpoint.first, v[j].first) && are_close(midpoint.second, v[j].second)) {
                            // Check if set (A, B, C) or (C, A, B) is not already seen
                            pair<int, int> set1 = {i, j};
                            pair<int, int> set2 = {k, i};
                            if (seen.find(set1) == seen.end() && seen.find(set2) == seen.end()) {
                                seen.insert(set1);
                                seen.insert(set2);
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << count/2 << endl;
    return 0;
}
