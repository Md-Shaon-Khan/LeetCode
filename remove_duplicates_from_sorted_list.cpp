#include<bits/stdc++.h>
using namespace std;


struct ListNode{
    int val;
    ListNode *next;

    ListNode(int x){
        val = x;
        next = nullptr;
    }
};

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode *temp = head;

            while (temp != nullptr && temp->next != nullptr){
                if(temp->val == temp->next->val){
                    temp->next = temp->next->next;
                }
                else{
                    temp = temp->next;
                }
                
            }

            return head;
        }
};


void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    int val;
    

   
    while (cin >> val && val != -1) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        
    }

 
    
    Solution sol;
    ListNode* result = sol.deleteDuplicates(head);

   
    printList(result);

    return 0;
}