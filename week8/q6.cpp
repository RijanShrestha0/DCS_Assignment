#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertRecursive(Node* root, int key)
{
    if (root == nullptr)
        return new Node{key, nullptr, nullptr};

    if (key < root->data)
        root->left = insertRecursive(root->left, key);
    else if (key > root->data)
        root->right = insertRecursive(root->right, key);

    return root;
}

void inorder(Node* root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    Node* root = nullptr;
    root = insertRecursive(root, 10);
    root = insertRecursive(root, 5);
    root = insertRecursive(root, 15);

    cout << "BST after Recursive Insertion: ";
    inorder(root);

    return 0;
}