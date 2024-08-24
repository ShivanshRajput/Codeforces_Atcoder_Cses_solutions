#include<bits/stdc++.h>
using namespace std;

bool isValid(int node, int n) {
    return node >= 0 && node < n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (s1[i] != '.') continue;
            bool left = 0, right = 0, bottom = 0, bl = 0, br = 0;
            int node = i - 1;
            if (isValid(node, n)) {
                if (s1[node] == '.') left = 1;
                if (s2[node] == 'x') bl = 1;
            }
            node = i + 1;
            if (isValid(node, n)) {
                if (s1[node] == '.') right = 1;
                if (s2[node] == 'x') br = 1;
            }
            if (s2[i] == '.') bottom = 1;
            if (left && right && bottom && bl && br) {
                count++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s2[i] != '.') continue;
            bool left = 0, right = 0, bottom = 0, bl = 0, br = 0;
            int node = i - 1;
            if (isValid(node, n)) {
                if (s2[node] == '.') left = 1;
                if (s1[node] == 'x') bl = 1;
            }
            node = i + 1;
            if (isValid(node, n)) {
                if (s2[node] == '.') right = 1;
                if (s1[node] == 'x') br = 1;
            }
            if (s1[i] == '.') bottom = 1;
            if (left && right && bottom && bl && br) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
