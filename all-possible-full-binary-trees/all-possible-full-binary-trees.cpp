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
    
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n==1) return {new TreeNode(0)};
        if (!n&1) return {};
        vector<TreeNode*> ans;
            for(int i=1;i<n;i=i+2){
            vector<TreeNode*>leftOf=allPossibleFBT(i);
            vector<TreeNode*>rightOf=allPossibleFBT(n-i-1);
            for(auto l:leftOf){
                for(auto r:rightOf){
                    TreeNode* root=new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }            
        
        return ans;
    }
};