#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        string s = "";
        stack<string> paths;

        for (int ch = 0; ch < path.size(); ch++)
        {
            if (path[ch] == '/')
            {
                if (!s.empty())
                {
                    paths.push(s);
                    s = "";
                }
            }
            else if (path[ch] == '.' && (ch == 0 || path[ch - 1] == '/'))
            {
                int dotCount = 0;
                while (ch < path.size() && path[ch] == '.')
                {
                    dotCount++;
                    ch++;
                }

                if (ch == path.size() || path[ch] == '/')
                {
                    if (dotCount == 1)
                    {
                        s = "";
                    }
                    else if (dotCount == 2)
                    {
                        if (!paths.empty())
                            paths.pop();
                    }
                    else
                    {
                        s = string(dotCount, '.');
                        ch--;
                    }
                }
                else
                {
                    s = string(dotCount, '.');
                    s += path[ch];
                }
            }
            else
            {
                s += path[ch];
            }
        }

        if (!s.empty())
        {
            paths.push(s);
        }

        vector<string> pathParts;
        while (!paths.empty())
        {
            pathParts.push_back(paths.top());
            paths.pop();
        }
        reverse(pathParts.begin(), pathParts.end());

        string result = "/";
        for (int i = 0; i < pathParts.size(); i++)
        {
            result += pathParts[i];
            if (i != pathParts.size() - 1)
                result += "/";
        }

        return result;
    }
};

int main()
{
    string input;
    getline(cin, input);

    Solution sol;
    string result = sol.simplifyPath(input);
    cout << result << endl;

    return 0;
}
