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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return recursion(preorder, inorder, 0, 0, inorder.size() - 1);
    }
private:
    TreeNode* recursion(vector<int>& preorder, vector<int>& inorder, int rootIndex, int left, int right)
    {
        if (left > right) return nullptr;
        
        int pivot = left;
        while (inorder[pivot] != preorder[rootIndex]) ++pivot;
        
        TreeNode* root{new TreeNode(preorder[rootIndex])};
        root->left = recursion(preorder, inorder, rootIndex + 1, left, pivot - 1);
        root->right = recursion(preorder, inorder, rootIndex + pivot - left + 1, pivot + 1, right);
        return root;
    }
};