int idx = 0;
Node *bstFromPreorder(vector<int> &preorder, int p_val = INT_MAX)
{
    if (idx >= preorder.size() || preorder[idx] > p_val)
        return nullptr;

    int curr = pre[idx];
    idx++;
    auto node = new Node(curr);
    node->left = bstFromPreorder(preorder, node->data);
    node->right = bstFromPreorder(preorder, p_val);
    return node;
}