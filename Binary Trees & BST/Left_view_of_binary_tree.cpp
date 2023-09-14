#include <bits/stdc++.h>
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
void leftView(TreeNode<int> *root, int lvl, vector<int> &ans)
{

    if (root == NULL)
        return;

    if (lvl == ans.size())
        ans.push_back(root->data);

    leftView(root->left, lvl + 1, ans);
    leftView(root->right, lvl + 1, ans);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    leftView(root, 0, ans);
    return ans;
}