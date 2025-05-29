#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    
   int count = 0; 
   for(int i=0;i<nums.size()-1;i++){
    for(int j=i+1;j<nums.size();j++){
       if(nums[i]==nums[j]){
        nums.erase(nums.begin()+j);
        ++count;
        j--;
       }
    }
   }

   return nums.size();

}

int main() {
    vector<int> nums;
    int x;
    while (cin >> x && x != -1) {  // Sentinel input -1
        nums.push_back(x);
    }

    int k = removeDuplicates(nums);

    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    return 0;
}
