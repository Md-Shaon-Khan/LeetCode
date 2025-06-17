#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while(j<k){
                int total = nums[i] + nums[j] + nums[k];

                if(total == 0){
                   result.push_back({nums[i],nums[j],nums[k]});
                   j++;

                   while(nums[j]==nums[j-1] && j<k){
                    j++;
                   }
                }
                else if(total<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    getline(cin, line); 

    istringstream iss(line);
    vector<int> nums;
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    Solution sol;
    vector<vector<int>> res = sol.threeSum(nums);

    for (auto &triplet : res) {
        for (int n : triplet)
            cout << n << " ";
        cout << "\n";
    }

    return 0;
}