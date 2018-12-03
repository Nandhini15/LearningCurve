#include <iostream>
#include<stdio.h>

using namespace std;
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* newNode(int idata)
{
    struct node* node = new struct node();
    node->data = idata;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int countNodes(struct node* root)
{
    int count = 0;
    if(root){
        count++;
        count = count + countNodes(root->left);
        count = count + countNodes(root->right);
    }
    return count;
}
int main()
{
    struct node *root = newNode(9);
    root->left = newNode(7);
    root->right = newNode(10);
    cout<<root->left->data<<endl;
    int c = countNodes(root);
    cout<<c<<endl;
    return 0;
}
