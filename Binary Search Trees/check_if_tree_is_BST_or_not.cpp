bool isBST(Node *node, int minKey, int maxKey)
{
    // base case
    if (node == NULL)
    {
        return true;
    }

    // if the node's value falls outside the valid range
    if (node->data < minKey || node->data > maxKey)
    {
        return false;
    }

    // recursively check left and right subtrees with an updated range
    return isBST(node->left, minKey, node->data) &&
           isBST(node->right, node->data, maxKey);
}

// Function to determine whether a given binary tree is a BST
void isBST(Node *root)
{
    if (isBST(root, INT_MIN, INT_MAX))
    {
        printf("The tree is a BST.");
    }
    else
    {
        printf("The tree is not a BST!");
    }
}
