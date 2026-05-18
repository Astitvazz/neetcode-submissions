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
    pair<bool,int> helper(TreeNode* root){
        //base case
        if(root==nullptr){
            return {true,0};
        }
        //recursive code
        pair<bool,int> p1=helper(root->left);
        pair<bool,int> p2=helper(root->right);
        if(p1.first==false||p2.first==false||abs(p1.second-p2.second)>1){
            return {false,max(p1.second,p2.second)+1};
        }
        else{
            return {true,max(p1.second,p2.second)+1};
        }
    }
    bool isBalanced(TreeNode* root) {
        pair<bool,int> res=helper(root);
        return res.first;
    }
};
