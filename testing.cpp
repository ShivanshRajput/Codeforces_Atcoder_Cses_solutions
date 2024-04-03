class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<string, int> prefixes;

        for (int num : arr1) {
            string str = to_string(num);
            for (int i = 1; i <= str.length(); ++i) {
                prefixes[str.substr(0, i)]++;
            }
        }

        int maxLen = 0;
        for (int num : arr2) {
            string str = to_string(num);
            for (int i = 1; i <= str.length(); ++i) {
                if (prefixes.count(str.substr(0, i))) {
                    maxLen = max(maxLen, i);
                } else {
                    break;
                }
            }
        }

        return maxLen;
    }
};


int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    
    unordered_map<string, int> freq;
    for (auto &i : arr1) {
        string s = to_string(i);
        for (int j = 1; j <= str.length(); j++) {
            freq[s.substr(0, i)]++;
        }
    }

    int maxi = 0;
    for (auto &i: arr2) {
        string s = to_string(i); 
        for (int j = 1; j <= str.length(); j++) {
            if (freq.count(str.substr(0, i))) {
                maxi = max(maxi, i);
            } else {
                break;
            }
        }
    }

    return maxi;
}