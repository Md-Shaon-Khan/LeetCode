#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = nullptr;
    }
};

class Solution {
private:
    ListNode* head;

public:
    Solution() {
        head = nullptr;
    }

    void insertAtEnd(int value) {
        ListNode* newNode = new ListNode(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    ListNode* getHead() {
        return head;
    }

    void printList(ListNode* node) {
        while (node != nullptr) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1 != nullptr) {
            tail->next = list1;
        } else if (list2 != nullptr) {
            tail->next = list2;
        }

        return dummy.next;
    }
};

int main() {
    Solution listA;
    listA.insertAtEnd(1);
    listA.insertAtEnd(2);
    listA.insertAtEnd(4);

    Solution listB;
    listB.insertAtEnd(1);
    listB.insertAtEnd(3);
    listB.insertAtEnd(4);

    Solution merger;
    ListNode* mergedHead = merger.mergeTwoLists(listA.getHead(), listB.getHead());
    merger.printList(mergedHead);

    return 0;
}
