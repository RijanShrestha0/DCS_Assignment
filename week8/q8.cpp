#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int key)
{
    if (!root)
        return new Node{key, nullptr, nullptr};

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
}

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

Node* search(Node* root, int key)
{
    if (!root || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main()
{
    Node* root = nullptr;
    int n, val, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter key to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Enter key to search: ";
    cin >> searchKey;

    if (search(root, searchKey))
        cout << "Key FOUND after deletion";
    else
        cout << "Key NOT FOUND after deletion";

    return 0;
}