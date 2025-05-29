#include <iostream>
using namespace std;

void dailyTemperatures(int temps[], int size, int answer[]) {
    int stack[100000];
    int top = -1;     

    for (int i = 0; i < size; i++) {
        
        while (top >= 0 && temps[i] > temps[stack[top]]) {
            int prevIndex = stack[top--]; 
            answer[prevIndex] = i - prevIndex; 
        }
        stack[++top] = i; 
    }


}

int main() {
    int temps[100000], answer[100000];
    int size = 0, x;


    while (cin >> x && x != -1) {
        temps[size++] = x;
    }


    for (int i = 0; i < size; i++) {
        answer[i] = 0;
    }


    dailyTemperatures(temps, size, answer);


    for (int i = 0; i < size; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;


// class Solution {
//     public:
//         vector<int> dailyTemperatures(vector<int>& temperatures) {
//             int sizes = temperatures.size();
//             vector<int> answer(sizes, 0);
//             stack<int> st;

//             for (int i = 0; i < sizes; i++) {
//                 while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
//                     int index = st.top();
//                     st.pop();
//                     answer[index] = i - index;
//                 }
//                 st.push(i);
//             }

//             return answer;
//         }
// };


// int main(){
    
//     Solution sol;

//     vector<int> temperatures;
//     int x;

//     while (cin>>x && x!=-1) {
//         temperatures.push_back(x);
//     }

//     vector<int>res = sol.dailyTemperatures(temperatures);

//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;



//     return 0;
// }
/*

#include <iostream>
using namespace std;

void dailyTemperatures(int temps[], int size, int answer[]) {
    int stack[100000]; // Stack to store indices
    int top = -1;       // Stack top

    for (int i = 0; i < size; i++) {
        // যদি বর্তমান টেম্পারেচার stack-এর top এর index এর টেম্পারেচার থেকে বেশি হয়
        while (top >= 0 && temps[i] > temps[stack[top]]) {
            int prevIndex = stack[top--]; // pop from stack
            answer[prevIndex] = i - prevIndex; // কতদিন পর উষ্ণ তাপমাত্রা পেলাম
        }
        stack[++top] = i; // push current index
    }

    // যাদের জন্য কোনো warmer দিন পাওয়া যায়নি, তাদের জন্য answer[] ইতিমধ্যেই 0
}

int main() {
    int temps[100000], answer[100000];
    int size = 0, x;

    // Input temperatures until -1
    while (cin >> x && x != -1) {
        temps[size++] = x;
    }

    // Initialize answer array to 0
    for (int i = 0; i < size; i++) {
        answer[i] = 0;
    }

    // Process
    dailyTemperatures(temps, size, answer);

    // Output
    for (int i = 0; i < size; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}

*/