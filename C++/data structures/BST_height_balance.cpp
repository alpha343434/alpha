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
    int height();
    int height(node*);
    bool balanced();
    bool balanced(node*);
    
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

int BST::height(node* n){
    if(n){
        return 1+max(height(n->left), height(n->right));
    }
    else return -1;
}
int BST::height(){
    int h = height(root);
    cout <<"height: " <<h <<endl;
    return h;
}

bool BST::balanced(node* n)
{
    if(n){
        int lh=height(n->left);
        int rh=height(n->right);
        if(abs(lh-rh)<=1 && balanced(n->left) && balanced(n->right) )
            return 1;
        else
            return 0;
    }
    else
        return 1;
}

bool BST::balanced()
{
    if(balanced(root)){
        cout <<"balanced" <<endl;
        return 1;
    }
    else{
        cout <<"not balanced" <<endl;
        return 0;
    }
}
int main(){
    BST tree;
    int keys[]={4,2,6,1,3,5,7};
    for(int i=0; i<7; i++)
        tree.insert(keys[i]);
    
    tree.print();
    tree.height();
    tree.balanced();

    return 0;
}
