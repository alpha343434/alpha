void BST::removeTree(node* &n) // node passed by reference
{ // postorder
    if(n)
    {
        removeTree(n->left);
        removeTree(n->right);
        cout <<"Removing node with value " <<n->value <<endl;
        delete n;
        n=NULL;
    };
};

void BST::removeTree()
{
    cout <<endl <<"Removing tree:" <<endl;
    removeTree(root);
};
