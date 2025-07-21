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
    int diameterOfBinaryTree(TreeNode* root) {
        int ses=0;
        diameter(root,ses);
        return ses;
    }
private:
    int diameter(TreeNode*curr,int&ses){
        if(!curr)return 0;
        int l=diameter(curr->left,ses);
        int r=diameter(curr->right,ses);
        ses=max(ses,l+r);
        return max(l,r)+1;
    }
};
