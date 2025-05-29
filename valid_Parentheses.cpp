#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                paren.push(ch);
            } 
            else {
                if (paren.empty()) return false;

                char top = paren.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    paren.pop();
                } else {
                    return false;
                }
            }
        }

        return paren.empty();
    }
};

int main() {
    string input;
    cout << "Enter a string with brackets: ";
    getline(cin, input);  // Take full line of input

    Solution sol;
    bool result = sol.isValid(input);

    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}