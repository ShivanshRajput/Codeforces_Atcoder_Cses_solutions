#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

using namespace std;

vector<int> find_bets(int n, const vector<int>& k) {
    double reciprocal_sum = 0.0;
    for (int ki : k) {
        reciprocal_sum += 1.0 / ki;
    }

    // If the sum of reciprocals is greater than or equal to 1, no solution exists
    if (reciprocal_sum >= 1.0) {
        return {-1};
    }

    // Otherwise, calculate the bets
    double B = 1.0;
    vector<double> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = B / (k[i] * reciprocal_sum);
    }

    // Ensure the condition k_i * b_i > B is met
    double total_bets = accumulate(b.begin(), b.end(), 0.0);
    while (true) {
        bool condition_met = true;
        for (int i = 0; i < n; ++i) {
            if (k[i] * b[i] <= total_bets) {
                condition_met = false;
                break;
            }
        }
        if (condition_met) {
            break;
        }
        B *= 10;
        total_bets *= 10;
        for (int i = 0; i < n; ++i) {
            b[i] = B / (k[i] * reciprocal_sum);
        }
    }

    // Convert bets to integer
    vector<int> int_b(n);
    for (int i = 0; i < n; ++i) {
        int_b[i] = static_cast<int>(b[i] + 0.5); // rounding to the nearest integer
    }

    return int_b;
}

int main() {
    vector<pair<int, vector<int>>> test_cases = {
        {3, {3, 2, 7}},
        {2, {3, 3}},
        {5, {5, 5, 5, 5, 5}},
        {6, {7, 9, 3, 17, 9, 13}},
        {3, {6, 3, 2}},
        {5, {9, 4, 6, 8, 3}}
    };

    for (const auto& [n, k] : test_cases) {
        vector<int> result = find_bets(n, k);
        if (result.size() == 1 && result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int bet : result) {
                cout << bet << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
