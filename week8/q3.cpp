#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* findMin(Node* root)
{
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* findMax(Node* root)
{
    while (root->right != nullptr)
        root = root->right;
    return root;
}

int main()
{
    Node* root = new Node{20, nullptr, nullptr};
    root->left = new Node{10, nullptr, nullptr};
    root->right = new Node{30, nullptr, nullptr};

    cout << "Minimum: " << findMin(root)->data << endl;
    cout << "Maximum: " << findMax(root)->data;

    return 0;
}