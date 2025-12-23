#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertIterative(Node* root, int key)
{
    Node* newNode = new Node{key, nullptr, nullptr};

    if (root == nullptr)
        return newNode;

    Node* curr = root;
    Node* parent = nullptr;

    while (curr != nullptr)
    {
        parent = curr;
        if (key < curr->data)
            curr = curr->left;
        else if (key > curr->data)
            curr = curr->right;
        else
            return root;
    }

    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

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
    root = insertIterative(root, 20);
    root = insertIterative(root, 10);
    root = insertIterative(root, 30);

    cout << "BST after Iterative Insertion: ";
    inorder(root);

    return 0;
}