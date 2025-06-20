#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        return nums[nums.size()-k];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    getline(cin, line);

    int k;
    cin >> k;

    istringstream iss(line);
    vector<int> nums;

    int number;
    while (iss >> number)
    {
        nums.push_back(number);
    }

    Solution sol;
    int result = sol.findKthLargest(nums, k);

    cout << result << endl;

    return 0;
}