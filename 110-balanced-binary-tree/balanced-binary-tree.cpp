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
    int getHeight(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int leftDepth=getHeight(root->left);
        int rightDepth=getHeight(root->right);
        int ans=max(leftDepth,rightDepth)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true; 
            //Empty tree ko balanced hi man rhe
        }
        //current node
        int leftHeight=getHeight(root->left);
        int rightHeight=getHeight(root->right);
        int absDiff=abs(leftHeight-rightHeight);
        if(absDiff>1){
            //not balanced 
            return false;
        }
        else{
            //current node toh balanced hai baaki recursion pai sambhal 
            bool leftAns=isBalanced(root->left);
            bool rightAns=isBalanced(root->right);
            if(leftAns==true&&rightAns==true){
                return true;
            }
            else{
                return false;
            }
        }
        //left
        //right

    }
};