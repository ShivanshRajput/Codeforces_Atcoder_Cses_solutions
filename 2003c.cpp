#include<bits/stdc++.h>
using namespace std;

void printCharacters(string& s) {
    unordered_map<char, int> freqMap;

    for (char c : s) {
        freqMap[c]++;
    }

    std::vector<char> keys;
    for (auto& pair : freqMap) {
        keys.push_back(pair.first);
    }

    while (!freqMap.empty()) {
        for (auto it = keys.begin(); it != keys.end(); ) {
            char c = *it;
            if (freqMap.find(c) != freqMap.end()) {
                cout << c;
                freqMap[c]--;
                if (freqMap[c] == 0) {
                    freqMap.erase(c);
                    it = keys.erase(it);
                } else {
                    ++it;
                }
            } else {
                ++it;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        printCharacters(s);
        cout<<endl;
    }
}