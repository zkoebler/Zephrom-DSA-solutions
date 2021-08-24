//O(n) solution
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){return 0;}
        int value = root->val;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        if(value >= low && value <= high)
        {
            return value + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
        else
        {
            return rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
    }
};

//only traverses nodes that are able to be apart of the solution space
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){return 0;}
        if(root->val < low)
        {
            return rangeSumBST(root->right,low,high);
        }
        if(root->val == low)
        {
            return root->val + rangeSumBST(root->right,low,high);
        }
        if(root->val > low && root->val < high)
        {
            return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
        if(root->val == high)
        {
            return root->val + rangeSumBST(root->left,low,high);
        }
        if(root->val > high)
        {
            return rangeSumBST(root->left,low,high);
        }
        return 0;
    }
};
