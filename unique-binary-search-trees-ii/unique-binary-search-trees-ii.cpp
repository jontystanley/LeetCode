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
    
    vector<TreeNode*>helper(int start,int end){
        if(start>end){
            return {NULL};
        }
        vector<TreeNode*>ans;
        for(int i=start;i<=end;i++){
            vector<TreeNode*>leftOf =helper(start,i-1);
            vector<TreeNode*>rightOf =helper(i+1,end);
            for(auto l: leftOf){
                for(auto r: rightOf){
                    TreeNode* root= new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);                   
                }
            }
        }
        return ans;
    }
    
    
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)return vector<TreeNode*>();
        return helper(1,n);
    }
};