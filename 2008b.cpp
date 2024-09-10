#include <iostream>
#include <string>

using namespace std;

bool isSquareMatrix(string& s) {
    int n = s.length();
    int consZeros = 0;
    int maxZeros = 0;
    int clusterCount = 0;
    bool cluster = false;

    for (char c : s) {
        if (c == '0') {
            if (!cluster) {
                clusterCount++;
                cluster = true;
            }
            consZeros++;
        } else {
            maxZeros = max(maxZeros, consZeros);
            consZeros = 0;
            cluster = false;
        }
    }

    maxZeros = max(maxZeros, consZeros);

    int columns = maxZeros + 2;
    int rows = clusterCount + 2;

    return (rows == columns) && (n == rows * columns);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << (isSquareMatrix(s) ? "Yes" : "No") << endl;
    }

    return 0;
}