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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qq;
        vector<vector<int>> vv;
        if(root==nullptr){
            return {};
        }
        qq.push(root);
        while(qq.empty()==false){
            int siz=qq.size();
            vector<int> temp;
            for(int i=0;i<siz;i++){
                temp.push_back(qq.front()->val);
                if(qq.front()->left!=nullptr){
                    qq.push(qq.front()->left);
                }
                if(qq.front()->right!=nullptr){
                    qq.push(qq.front()->right);
                }
                qq.pop();
            }
            vv.push_back(temp);
        }
        return vv;
    }
};
