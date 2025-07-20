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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL)return false;
        vector<int>v(100005,0);
        int n=v.size();
        for(int i=0;i<n;i++){
            if(i%2){
                v[i]=INT_MAX;
            }
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            pair<TreeNode*,int>tmp=q.front();
            q.pop();

            TreeNode* node=tmp.first;
            int level=tmp.second;

            if(level %2==node->val%2)return false;
            
            if(level%2!=0){
                if(v[level]<=node->val)return false;
            } 
            else{
                if(v[level]>=node->val)return false;
            }

            v[level]=node->val;

            if(node->left!=NULL){
                q.push({node->left,level+1});
            }
            if(node->right!=NULL){
                q.push({node->right,level+1});
            }

        }

        return true;
        
    }
};
