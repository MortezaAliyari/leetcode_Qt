// C++ program for different tree traversals
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
  if (node==NULL)
    return;
  printInorder(node->left);
  cout<<node->data<<" , ";
  printInorder(node->right);


}

/* Driver code*/
int main()
{
  int y=9;
  int* ptr = new int;
  int *p=&y;// dynamically allocate memory for an integer
  *ptr = 10;
  // store value 10 in the allocated memory location
  delete ptr;
if(*ptr==NULL)
  cout<<p<<" , "<<&p<<" , "<<*p<<endl;
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);


      // Function call
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);


    return 0;
}
