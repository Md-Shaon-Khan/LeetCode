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
    ListNode* middleNode(ListNode* head){

        int count = 0;
        ListNode* temp = head;
        
      
        while (temp != nullptr) {
            ++count;
            temp = temp->next;
        }
        
        
        int mid = count / 2;
        temp = head;
        for (int i = 0; i < mid; ++i) {
            temp = temp->next;
        }
        
        return temp;

    }

};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
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
    ListNode* result = sol.middleNode(head);

   
    printList(result);

    return 0;
}
