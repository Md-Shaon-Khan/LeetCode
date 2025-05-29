#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";
        sort(v.begin(), v.end());
        int n = v.size();
        string first = v[0], last = v[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};

int main() {
    vector<string> strs;
    string s;


    while (cin >> s && s != "end") {
        strs.push_back(s);
    }

    Solution obj;
    string result = obj.longestCommonPrefix(strs);

    cout << result << "\n";

    return 0;
}
