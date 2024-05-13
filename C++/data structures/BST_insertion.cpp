#include <iostream>
using namespace std;

class node{
    int value;
    node *left;
    node *right;
    friend class BST;
};

class BST{
    node *root;

    public:
    BST(){
        root = NULL;
    }
    void insert(int);
};

void BST::insert(int key){
    node *n = new node;
    n->value = key;
    n->left = NULL;
    n->right = NULL;

    node *parent = NULL;
    if(root){
        node *p=root;
        while(p){
            parent = p;
            if(key <= p->value){
                p = p->left;
            }
            else{
                p = p->right;
            }
        }
        if(key <= parent->value)
            parent->left=n;
        else
            parent->right=n;        
    }
    else
        root = n;
}

int main(){
    BST tree;

    tree.insert(12);
    tree.insert(24);
    tree.insert(36);
    tree.insert(48);

    return 0;
}
