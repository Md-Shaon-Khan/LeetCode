#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        char stk[n]; // array to simulate stack
        int top = -1; // simulate stack top
        int imbalance = 0;

        for (char c : s) {
            if (c == '[') {
                stk[++top] = c; // push
            } else { // c == ']'
                if (top != -1) {
                    top--; // pop
                } else {
                    imbalance++; // unmatched closing
                }
            }
        }

        // Each swap fixes two mismatches: one '[' and one ']'
        return (imbalance + 1) / 2;
    }
};

int main() {
    string s;
    cin >> s;

    Solution sol;
    int res = sol.minSwaps(s);
    cout << res << endl;

    return 0;
}
