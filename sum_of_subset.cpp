
#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int>& set, int n, int sum) {
    if (sum == 0) {
        return true;
    }
    if (n == 0) {
        return false;
    }
    if (set[n - 1] > sum) {
        return isSubsetSum(set, n - 1, sum);
    }
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

void findSubsetSum(vector<int>& set, int sum) {
    int n = set.size();
    if (isSubsetSum(set, n, sum)) {
        cout << "Subset with sum " << sum << " exists: ";
        for (int i = 0; i < n; i++) {
            if (set[i] <= sum) {    
                cout << set[i] << " ";
                sum -= set[i];
            }
        }
        cout << endl;
    } else {
        cout << "No subset with sum " << sum << " exists." << endl;
    }
}

int main() {
    vector<int> set;
    cout<<"enter list size\n";
    int n;
    cin>>n;
    cout<<"enter list\n";
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        set.push_back(c);
    }
    int sum;
    cout<<"enter sum\n";
    cin>>sum;
    findSubsetSum(set, sum);
    return 0;
}