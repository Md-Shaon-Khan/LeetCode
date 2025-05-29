#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            int digit = sum % 10;
            current->next = new ListNode(digit);
            current = current->next;
        }

        return dummy->next;
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


int main()
{
    Solution s1, s2, result;

    // First number: 342 -> [2,4,3]
    s1.insertAtEnd(2);
    s1.insertAtEnd(4);
    s1.insertAtEnd(3);

    // Second number: 465 -> [5,6,4]
    s2.insertAtEnd(5);
    s2.insertAtEnd(6);
    s2.insertAtEnd(4);

    ListNode *res = result.addTwoNumbers(s1.getHead(), s2.getHead());

    result.printList(res); // Output should be: 7 0 8

    return 0;
}
