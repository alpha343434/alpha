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
    void preorder(node*);
    void preorder();
    void inorder(node*);
    void inorder();
    void postorder(node*);
    void postorder();
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

void BST::preorder(node *n){
    if(n){
        cout <<" " <<n->value <<" ";
        preorder(n->left);
        preorder(n->right);
    }
}
void BST::preorder(){
    preorder(root);
    cout <<endl;
}

void BST::inorder(node *n){
    if(n){
        inorder(n->left);
        cout <<" " <<n->value <<" ";
        inorder(n->right);
    }
}
void BST::inorder(){
    inorder(root);
    cout <<endl;
}

void BST::postorder(node *n){
    if(n){
        postorder(n->left);
        postorder(n->right);
        cout <<" " <<n->value <<" ";
    }
}
void BST::postorder(){
    postorder(root);
    cout <<endl;
}
int main(){
    BST tree;
    int keys[]={4,2,6,1,3,5,7};
    for(int i=0; i<7; i++)
        tree.insert(keys[i]);
    
    tree.preorder();
    tree.inorder();
    tree.postorder();  

    return 0;
}
