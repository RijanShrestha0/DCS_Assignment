#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* searchIterative(Node* root, int key)
{
    while (root != nullptr)
    {
        if (root->data == key)
            return root;

        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main()
{
    Node* root = new Node{20, nullptr, nullptr};
    root->left = new Node{10, nullptr, nullptr};
    root->right = new Node{30, nullptr, nullptr};

    int key = 25;

    if (searchIterative(root, key))
        cout << "Key Found (Iterative Search)";
    else
        cout << "Key Not Found";

    return 0;
}