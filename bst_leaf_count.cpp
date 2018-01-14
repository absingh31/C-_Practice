
#include <bits/stdc++.h>
using namespace std;
 

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
 
// Create a newNode in binary search tree.
struct Node* newNode(int data)
{
    struct Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Insert a Node in binary search tree.
struct Node* insert(struct Node* root, int data)
{
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}
 
 
int countLeafNode(struct Node *root){
    /* Empty(NULL) Tree */
    if(root == NULL)
        return 0;
    /* Check for leaf node */
    if(root->left == NULL && root->right == NULL)
        return 1;
    /* For internal nodes, return the sum of 
    leaf nodes in left and right sub-tree */
    return countLeafNode(root->left) + countLeafNode(root->right);
}

int main()
{
    struct Node* root = NULL;
    root = insert(root, 9);
    insert(root, 11);
    insert(root, 4);
    insert(root, 7);
    insert(root, 2);
    insert(root, 6);
    insert(root, 5);
    cout<<countLeafNode(root)<<endl;
    return 0;
}