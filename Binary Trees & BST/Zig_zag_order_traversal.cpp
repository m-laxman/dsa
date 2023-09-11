#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    bool lefttoright = true;
    while (!q.empty())
    {
        int len = q.size();
        vector<int> temp(len);
        for (int i = 0; i < len; i++)
        {
            int idx = lefttoright ? i : len - i - 1;
            BinaryTreeNode<int> *node = q.front();
            q.pop();
            temp[idx] = node->dal̥ta;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        lefttoright = !lefttoright;
        for (auto i : temp)
            ans.push_back(i);
    }
    return ans;
}
