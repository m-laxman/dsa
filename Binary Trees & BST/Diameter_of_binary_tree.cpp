/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solve(TreeNode<int> *root, int &diameter)
{

    if (root == NULL)
        return 0;

    int left_len = solve(root->left, diameter);
    int right_len = solve(root->right, diameter);

    diameter = max(diameter, left_len + right_len);
    return 1 + max(left_len, right_len);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    // Write Your Code Here.
    int diameter = 0;
    solve(root, diameter);
    return diameter;
}
