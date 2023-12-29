/*  1676. Lowest Common Ancestor of a Binary Tree IV
    Input: root = [3,5,1,6,2,0,8,null,null,7,4], nodes = [4,7]
    Output: 2
    Explanation: The lowest common ancestor of nodes 4 and 7 is node 2.
*/
// O(n), O(n)
TreeNode *lowestCommonAncestor(TreeNode *root, vector<TreeNode *> &nodes)
{

    if (root == NULL)
        return NULL;

    for (TreeNode *node : nodes)
    {
        if (root == node)
            return node;
    }

    TreeNode *left = lowestCommonAncestor(root->left, nodes);
    TreeNode *right = lowestCommonAncestor(root->right, nodes);

    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    else if (left != NULL && right == NULL)
    {
        return left;
    }
    else if (left == NULL && right != NULL)
    {
        return right;
    }
    else
        return root;
}