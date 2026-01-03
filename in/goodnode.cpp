// Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.
// Return the number of good nodes in the binary tree.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    int dfs(TreeNode *node, int maxsofar)
    {
        if (!node)
            return 0;
        int count = 0;
        if (node->val >= maxsofar)
        {
            count = 1;
            maxsofar = node->val;
        }
        count += dfs(node->left, maxsofar);
        count += dfs(node->right, maxsofar);
        return count;
    }

    int goodNodes(TreeNode *root)
    {
        if (!root)
            return 0;
        return dfs(root, root->val);
    }
};

TreeNode *buildTree(vector<int> &arr)
{
    if (arr.size() == 0 || arr[0] == -1)
        return NULL;

    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size())
    {
        TreeNode *curr = q.front();
        q.pop();

        if (i < arr.size() && arr[i] != -1)
        {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1)
        {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    TreeNode *root = buildTree(arr);
    Solution obj;
    cout << obj.goodNodes(root);
    return 0;
}
