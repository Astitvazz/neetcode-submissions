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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        queue<TreeNode*> qq;
        vector<int> res;
        qq.push(root);
        while(!qq.empty()){
            int len=qq.size();
            for(int i=0;i<len;i++){
                TreeNode* temp=qq.front();
                if(temp->left!=nullptr){
                    qq.push(temp->left);
                }
                if(temp->right!=nullptr){
                    qq.push(temp->right);
                }
                if(i==len-1){
                    res.push_back(temp->val);
                }
                qq.pop();
            }
        }
        return res;
    }
};
