#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());

        if(nums1.size()==1){
            return nums1[0];
        }
        else if(nums1.size()%2==1){
            return nums1[nums1.size()/2];
        }
        else{
            return (nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1])/2.0;
        }

        
    }
};

int main()
{
    int x;
    vector<int>array1;
    vector<int>array2;
    while(cin>>x && x!=-1){
       array1.push_back(x);
    }
    while(cin>>x && x!=-1){
       array2.push_back(x);
    }

    Solution sol;
    double result = sol.findMedianSortedArrays(array1,array2);

    cout<<result<<endl;
    
}