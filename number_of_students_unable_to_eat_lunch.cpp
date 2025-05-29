#include <iostream>
using namespace std;

class Solution {
public:
    int countStudents(int students[], int n, int sandwiches[], int m) {
        int front = 0;       // index of front student
        int index = 0;       // index of top sandwich
        int total = n;       // total number of students
        int noProgress = 0;  // counter to track unchanged rotations

        while (total > 0 && noProgress < total) {
            if (students[front] == sandwiches[index]) {
                // Match found, student leaves, sandwich taken
                front = (front + 1) % n;
                index++;
                total--;
                noProgress = 0;
            } else {
                // Move student to back of the queue
                int student = students[front];
                front = (front + 1) % n;
                students[(front + total - 1) % n] = student;
                noProgress++;
            }
        }

        return total; // Number of students who can't eat
    }
};

int main() {
    Solution sol;
    int students[1000], sandwiches[1000];
    int x, y;
    int n = 0, m = 0;

    // Input for students
    while (cin >> x && x != -1) {
        students[n++] = x;
    }

    // Input for sandwiches
    while (cin >> y && y != -1) {
        sandwiches[m++] = y;
    }

    int answer = sol.countStudents(students, n, sandwiches, m);

    cout << answer << endl;

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// // class Solution {
// //     public:
// //         int countStudents(vector<int>& students, vector<int>& sandwiches) {
// //             int count0 = count(students.begin(),students.end(),0);
// //             int count1 = count(students.begin(),students.end(),1);

// //             for(int i=0;i<sandwiches.size();i++){
// //                 if(sandwiches[i]==0){
// //                     if(count0==0){
// //                         return count1;
// //                     }

// //                     count0--;
// //                 }
// //                 else{
// //                     if(count1==1){
// //                         return count0;
// //                     }

// //                     count1--;
// //                 }
// //                 }
// //                 return 0;
// //             }
            
// // };

// class Solution {
//     public:
//         int countStudents(vector<int>& students, vector<int>& sandwiches) {
//             queue<int> q;        
//             stack<int> s;        
    

//             for (int stu : students) {
//                 q.push(stu);
//             }

//             for (int i = sandwiches.size() - 1; i >= 0; --i) {
//                 s.push(sandwiches[i]);
//             }
    
//             int noProgress = 0; 
    
//             while (!q.empty() && noProgress < q.size()) {
//                 int student = q.front();
//                 q.pop();
    
//                 if (student == s.top()) {
                
//                     s.pop();
//                     noProgress = 0;
//                 } else {
      
//                     q.push(student);
//                     noProgress++; 
//                 }
//             }
    
//             return q.size(); 
//         }
//     };
    

// int main(){
//     Solution sol;

//     vector<int> students;
//     int x;

//     while (cin>>x && x!=-1) {
//         students.push_back(x);
//     }

//     vector<int> sandwiches;
//     int y;

//     while (cin>>y && y!=-1) {
//         sandwiches.push_back(y);
//     }

//     int answer = sol.countStudents(students,sandwiches);

//     cout<<answer<<endl;

//     return 0;
// }