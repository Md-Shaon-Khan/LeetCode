#include <iostream>
using namespace std;

class Solution{
public:
    int uniqueCharacter(char s[]) {
        int freq[26] = {0}; // frequency array

        // Step 1: Count frequency of each character
        for (int i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;
        }

        // Step 2: Find first character with frequency 1
        for (int i = 0; s[i] != '\0'; i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; // no unique character found
    }
};

int main() {
    Solution sol;

    char s[1000]; // fixed size char array
    cin >> s;

    int index = sol.uniqueCharacter(s);
    cout << index << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// // class Solution{
// //     public:
// //     int uniqueCharacter(string s){
// //         vector<int> freq(26,0);

        
// //         for(char c : s){
// //             freq[c - 'a']++;
// //         }

    
// //         for(int i=0;i<s.size();i++){
// //             if(freq[s[i] - 'a'] == 1){
// //                 return i;
// //             }
// //         }

// //         return -1;
// //     }

// // };


// class Solution {
//     public:
//         int uniqueCharacter(string s) {
//             vector<int> freq(26, 0);
//             queue<pair<char, int>> q;
    
            
//             for (int i = 0; i < s.size(); i++) {
//                 char c = s[i];
//                 freq[c - 'a']++;
    
//                 q.push({c, i});  
//             }
    
            
//             while (!q.empty()) {
//                 char c = q.front().first;
//                 int idx = q.front().second;
    
//                 if (freq[c - 'a'] == 1) {
//                     return idx; 
//                 } else {
//                     q.pop();
//                 }
//             }
    
         
//             return -1;
//         }
// };

    
// int main(){
//     Solution sol;

//     string s;
//     cin>>s;

//     int count = sol.uniqueCharacter(s);

//     cout<<count<<endl;

//     return 0;
// }