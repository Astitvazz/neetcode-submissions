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
    pair<int,int> helper(TreeNode* root){
        //base case
        if(root==nullptr){
            return {0,0};
        }

        //recursive code
        pair<int,int> p1=helper(root->left);
        pair<int,int> p2=helper(root->right);
        int x=max(p1.first,p2.first);
        int y=p2.second+p1.second;
        return {max(x,y),max(p2.second,p1.second)+1};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair <int,int> pai=helper(root);
        return pai.first;
    }
};
