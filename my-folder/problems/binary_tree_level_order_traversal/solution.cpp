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
        map<int, vector<int>> levelMap {};
        vector<vector<int>> result {};
        traverseTree(root, 0, levelMap);
        for (const auto& elem : levelMap)
            result.push_back(elem.second);
        return result;
    }
    
private:
    void traverseTree(TreeNode* root, int level, map<int, vector<int>>& levelMap)
    {
        if (!root) return;
        levelMap[level++].push_back(root->val);
        traverseTree(root->left, level, levelMap);
        traverseTree(root->right, level, levelMap);
    }
};