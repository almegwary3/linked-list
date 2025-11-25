#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);
    return root;
}

bool search(Node* root, int val) {
    if (root == nullptr)
        return false;
    if (root->data == val)
        return true;
    else if (val < root->data)
        return search(root->left, val);
    else
        return search(root->right, val);
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "BST in-order traversal: ";
    inorder(root);
    cout << endl;

    int key = 40;
    if (search(root, key))
        cout << key << " found in BST" << endl;
    else
        cout << key << " not found in BST" << endl;

    return 0;
}
