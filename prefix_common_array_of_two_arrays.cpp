#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        if(A.size()==0 || B.size()==0){
            return result;
        }
        int count = 0;

        
            
        for(int i = 0; i < A.size(); i++) {
            int count = 0; // Reset count for each prefix

            // Check if A[i] is in the prefix of B (from 0 to i)
            for(int j = 0; j <= i; j++) {
                for(int k = 0; k <= i; k++) {
                    if(A[j] == B[k]) {
                        ++count; // If common, increase the count
                    }
                }
            }
            
            // Store the count of common elements at this prefix
            result.push_back(count);
        }
            
            
     
        

        return result;  // In case no return (to satisfy all compiler paths)
    }
};

int main(){

    vector<int> num1;
    vector<int> num2;

    int x,y;
    while (cin >> x && x != -1) {  
        num1.push_back(x);
        
    }
    while (cin >> y && y != -1) {  
        num2.push_back(y);
        
    }

    Solution obj;
    vector<int> result = obj.findThePrefixCommonArray(num1, num2);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
