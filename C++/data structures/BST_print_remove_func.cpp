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
    void print();
    void print(node*,int);
    void remove(int);
    void remove(node* &,int);
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

void BST::print(node *p, int space){
    if(p){
        space += 8;
        print(p->right, space);
        cout <<endl;

        for(int i=8; i<space; i++){
            cout <<" ";
        }
        cout <<p->value <<endl;
        print(p->left, space);
    }
    else return;
}
void BST::print(){
    print(root, 1);
}

void BST::remove(node* &n,int key){ //node passed by reference
    if(key < (n->value)){
        if(n->left){
            remove(n->left, key);
        }else cout <<key <<" is not in the tree";
    }

    else if(key > n->value){
        if(n->right){
            remove(n->right, key);
        }else cout <<key <<" is not in the tree";
    }

    else{
        if(n->left == NULL && n->right == NULL){ // leaf condition
            delete n;
            n=NULL;
        }
        else if(n->left && n->right){ // two children
            node* m = n->left;
            while(m->right){
                m = m->right;
            }
            n->value = m->value;
            remove(n->left, m->value);
        }
        else{ // one child
            node* child = (n->left) ? (n->left) : (n->right); // ternary operator
            node* m = n;
            n = child;
            delete m;
        }
    }
}
void BST::remove(int key){
    if(root){
        remove(root, key);
    }
    else cout <<"empty tree";
}

int main(){
    BST tree;
    int keys[]={4,2,6,1,3,5,7};
    for(int i=0; i<7; i++)
        tree.insert(keys[i]);
    
    tree.print();
    tree.remove(4);
    tree.print();
    tree.remove(1);
    tree.print();

    return 0;
}
