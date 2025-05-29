#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int data){
        val = data;
        next =nullptr;
    }
};

class Solution {
    private:
    ListNode* head;

    public:
    Solution(){
        head = nullptr;
    }

    void insertAtEnd(int value){
        ListNode* newNode = new ListNode(value);
        if(head==nullptr){
            head = newNode;
            return;
        }
        ListNode* temp = head;

        while(temp->next!=nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        int count = 0;
        while(temp!=nullptr){
            temp = temp->next;
            count++;
        }

        int positionToDelete = count - n + 1;

        

        if(positionToDelete == 1){
        ListNode* delNode = head;
        head = head->next;
        delete delNode;
        return head;
    }

        ListNode* temporary = head;

        for(int i=1;i<positionToDelete-1;i++){
            if(temporary==nullptr || temporary->next==nullptr){
                return head;
            }
            temporary = temporary->next;
        }

        ListNode* delNode = temporary->next;
        if(delNode!=nullptr){
            temporary->next = delNode->next;

            delete delNode;
        }

        return head;
        
    }
    void printList(ListNode* node) {
        while (node != nullptr) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }

    ListNode* getHead() {
        return head;
    }
};

int main(){
    Solution sol;
    sol.insertAtEnd(1);
    sol.insertAtEnd(2);
    sol.insertAtEnd(3);
    sol.insertAtEnd(4);
    sol.insertAtEnd(5);

    ListNode* newHead = sol.removeNthFromEnd(sol.getHead(),2);
    sol.printList(newHead);
}