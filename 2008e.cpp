#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int minOps(string &s) {
    int n = s.length();
    if (n % 2 == 1) return -1;

    unordered_map<char, int> even, odd;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) even[s[i]]++;
        else odd[s[i]]++;
    }

    int maxEven = 0, maxOdd = 0;
    char evenChar = 'a', oddChar = 'a';

    for (auto &e : even) {
        if (e.second > maxEven) {
            maxEven = e.second;
            evenChar = e.first;
        }
    }

    for (auto &o : odd) {
        if (o.second > maxOdd) {
            maxOdd = o.second;
            oddChar = o.first;
        }
    }

    if (evenChar == oddChar) {
        int secondMaxEven = 0, secondMaxOdd = 0;

        for (auto &e : even) {
            if (e.first != evenChar) {
                secondMaxEven = max(secondMaxEven, e.second);
            }
        }

        for (auto &o : odd) {
            if (o.first != oddChar) {
                secondMaxOdd = max(secondMaxOdd, o.second);
            }
        }

        return min(n / 2 - maxEven + n / 2 - secondMaxOdd,
                   n / 2 - secondMaxEven + n / 2 - maxOdd);
    } else {
        return n / 2 - maxEven + n / 2 - maxOdd;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n % 2 == 1) {
            int minOpsRequired = INT_MAX;
            for (int i = 0; i < n; i++) {
                string newS = s.substr(0, i) + s.substr(i + 1);
                int ops = minOps(newS);
                if (ops != -1) {
                    minOpsRequired = min(minOpsRequired, ops + 1);
                }
            }
            cout << minOpsRequired << endl;
        } else {
            cout << minOps(s) << endl;
        }
    }
    return 0;
}
