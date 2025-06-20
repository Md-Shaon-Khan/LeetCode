#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <sstream>

using namespace std;

// Definition for a binary tree node (as given by LeetCode).
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Class with inorder traversal method
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* current = root;

        while (current != nullptr || !s.empty()) {
            while (current != nullptr) {
                s.push(current);
                current = current->left;
            }
            current = s.top();
            s.pop();
            result.push_back(current->val);
            current = current->right;
        }

        return result;
    }
};

// Helper function to build a tree from a vector (level-order)
TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Left child
        if (i < nodes.size() && nodes[i] != "null") {
            current->left = new TreeNode(stoi(nodes[i]));
            q.push(current->left);
        }
        i++;

        // Right child
        if (i < nodes.size() && nodes[i] != "null") {
            current->right = new TreeNode(stoi(nodes[i]));
            q.push(current->right);
        }
        i++;
    }

    return root;
}

// Main function for testing
int main() {
    vector<string> input = {"1", "null", "2", "3"};  // Example input
    TreeNode* root = buildTree(input);

    Solution sol;
    vector<int> output = sol.inorderTraversal(root);

    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
