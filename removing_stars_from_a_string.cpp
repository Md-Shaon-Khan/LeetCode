#include <iostream>
#include <cstring>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        char result[n]; 
        int top = -1;   

        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                if (top >= 0) {
                    top--; 
                }
            } else {
                result[++top] = s[i]; 
            }
        }

      
        string finalStr = "";
        for (int i = 0; i <= top; i++) {
            finalStr += result[i];
        }

        return finalStr;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;

    string result = sol.removeStars(s);
    cout << result << endl;

    return 0;
}
