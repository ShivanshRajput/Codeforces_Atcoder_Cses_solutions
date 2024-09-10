#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long solve(long long l, long long r) {
    long long length = 1;
    long long current = l;
    long long diff = 1;
    
    while (true) {
        if (current + diff > r) break;
        current += diff;
        diff += 1;
        length++;
    }
    
    return length;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }
    
    return 0;
}