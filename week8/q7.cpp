#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* searchRecursive(Node* root, int key)
{
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return searchRecursive(root->left, key);
    else
        return searchRecursive(root->right, key);
}

int main()
{
    Node* root = new Node{10, nullptr, nullptr};
    root->left = new Node{5, nullptr, nullptr};
    root->right = new Node{15, nullptr, nullptr};

    int key = 5;

    if (searchRecursive(root, key))
        cout << "Key Found";
    else
        cout << "Key Not Found";

    return 0;
}