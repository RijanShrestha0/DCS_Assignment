#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* findMin(Node* root)
{
    while (root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key)
{
    if (!root) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (!root->left)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (!root->right)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
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
    root = new Node{50, nullptr, nullptr};
    root->left = new Node{30, nullptr, nullptr};
    root->right = new Node{70, nullptr, nullptr};

    root = deleteNode(root, 30);

    cout << "BST after Deletion: ";
    inorder(root);

    return 0;
}