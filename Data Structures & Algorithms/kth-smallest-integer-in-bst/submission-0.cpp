/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void helper(TreeNode* root, vector<int>& vv){
        //base case
        if(root==nullptr){
            return;
        }
        

        //recursive code
        helper(root->left,vv);
        vv.push_back(root->val);
        helper(root->right,vv);

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vv;
        helper(root,vv);
        return vv[k-1];
    }
};
