#include<bits/stdc++.h>
using namespace std;

struct Node{
  
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
class solution{

    public:
    Node* middleNode(Node* head){
        int count = 0;
        Node* temp = head;

        while(temp!=nullptr){
            ++count;
            temp = temp->next;
        }

        int mid = count/2;
        
        temp = head;
        for(int i=1;i<=mid;i++){
           temp = temp->next;
        }

        return temp;
    }

    traverse(Node* head){
        Node* temp = head;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

    }

};
int main(){
    Node* head = nullptr;
    Node* rear = nullptr;

    int val;

    while(cin>>val && val != -1){
        Node* newNode = new Node(val);

        if(head==nullptr){
            head = newNode;
            rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }


    solution sol;

    Node* result = sol.middleNode(head);
    sol.traverse(result);


    return 0;

}