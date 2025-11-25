

#include <iostream>
using namespace std;
struct Node{
    int value;
    Node*left;
    Node*right;
    Node (int val)
    {
        value=val;
        left=nullptr;
        right=nullptr;
    }
};

void preorder(Node*root)
{
    if(root==nullptr)
    return;
    cout<<root->value<<endl;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
   Node*root= new Node(10); 
   root->left= new Node(5); 
   root->right= new Node(15); 
   root->right->left= new Node(20); 
   root->left->left= new Node(2); 
   root->left->right= new Node(7); 

   cout<<"preorder traaversal:";
    preorder(root);
    return 0;
    

}
