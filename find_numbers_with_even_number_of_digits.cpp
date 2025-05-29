#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int evenSize=0;
        for(int i=0;i<size;i++){
            int temp = 0;
         while(nums[i] != 0){
                nums[i] = nums[i]/10;
                temp++;
            }
            if(temp%2==0){
               evenSize++;
            }
        }

        return evenSize;
    }
};

int main(){
    vector<int> strs;


    int x;
    while (cin >> x && x != -1) {
        strs.push_back(x);
    }
    
    Solution sol;
    int ans = sol.findNumbers(strs);

    cout<<ans<<endl;
}