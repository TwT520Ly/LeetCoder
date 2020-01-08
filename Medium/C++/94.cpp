#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.
*/
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* > S;
        TreeNode* temp_node = root;
        vector<int > visit;
        while(temp_node || !S.empty()) {
            if(temp_node) {
                S.push(temp_node);
                temp_node = temp_node->left;
            } else {
                temp_node = S.top();
                S.pop();
                visit.push_back(temp_node->val);
                temp_node = temp_node->right;
            }
        }
        return visit;
    }
};
