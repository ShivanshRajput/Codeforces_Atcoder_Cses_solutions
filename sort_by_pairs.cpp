#include<bits/stdc++.h>
using namespace std;

bool sortByValue(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
}

int main() {
    int t;
    cin>>t;
    vector<pair<string, int>> pairs ;

    while(t--){
        string s;
        cin>>s;
        int num;
        cin>>num;
        pairs.push_back({s,num});
    }

    sort(pairs.begin(), pairs.end(), sortByValue);

    for (auto p : pairs) {
        cout << p.first << " : " << p.second <<endl;
    }

    return 0;
}
