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
class Solution{
    public:
     ListNode* reverseList(ListNode* head){
        ListNode* temp=head;
        ListNode* temp1 = nullptr;

        while (temp != nullptr) {
            ListNode* newNode = new ListNode(temp->val);
            newNode->next = temp1;
            temp1 = newNode;

            temp = temp->next;
        }

        return temp1;
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
    ListNode* result = sol.reverseList(head);

   
    printList(result);

    return 0;
}
