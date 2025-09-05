#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x):
    val(x),left(nullptr),right(nullptr){}
};

TreeNode* buildTree(const vector<string>& nodes){
    if(nodes.empty() || nodes[0]=="null"){
        return nullptr;
    }

    TreeNode* root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*>q;
    q.push(root);
    int i = 1;

    while(!q.empty() && i<nodes.size()){
        TreeNode* current = q.front();
        q.pop();

        if(i<nodes.size() && nodes[i] != "null"){
            current->left = new TreeNode(stoi(nodes[i]));
            q.push(current->left);
        }
        i++;

        if(i<nodes.size() && nodes[i] != "null"){
            current->right = new TreeNode(stoi(nodes[i]));
            q.push(current->right);
        }
        i++;
    }

    return root;

}

int maxDepth(TreeNode* root){
    if(!root){
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return 1 + max(left,right);
}

int main() {
    vector<string> input = {"3","9","20","null","null","15","7"};  // Example input
    TreeNode* root = buildTree(input);

    int answer = maxDepth(root);
    cout<<answer<<endl;

    return 0;
}