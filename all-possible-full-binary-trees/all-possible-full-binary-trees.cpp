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
        if (!n&1) return {};// returning empty tree for even numbers
        vector<TreeNode*> ans;
        //skipping recursive calls for even numbers
        for(int i=1;i<n;i=i+2){
        vector<TreeNode*>leftOf=allPossibleFBT(i);//left sub
        vector<TreeNode*>rightOf=allPossibleFBT(n-i-1);//right sub
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