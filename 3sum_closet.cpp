#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        stack<int> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k)
            {
                int total = nums[i] + nums[j] + nums[k];

                if (result.empty())
                {
                    result.push(total);
                }
                else if (abs(total - target) < abs(result.top() - target))
                {
                    result.pop();
                    result.push(total);
                }

                if (total == target)
                {
                   
                    return total;
                }
                else if (total < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return result.top();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    getline(cin, line);

    int target;
    cin >> target;

    istringstream iss(line);
    vector<int> nums;

    int number;
    while (iss >> number)
    {
        nums.push_back(number);
    }

    Solution sol;
    int result = sol.threeSumClosest(nums, target);

    cout << result << endl;

    return 0;
}