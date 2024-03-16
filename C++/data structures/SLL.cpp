#include <iostream>
using namespace std;

// SLL

class Node
{
    int value;  // value stored in this node
    Node* next;  // pointer to the next node
    friend class SLL;  // declare SLL as friend
};

class SLL
{
    Node* headPtr;
  public:
    SLL();  // constructor
    ~SLL();  // destructor
    void insertFront(int x);
    void insertEnd(int x);
    int head();
    int tail();
    bool isEmpty();
    void print();
    void removeFront();
    void removeEnd();
    Node* find(int x);
    
};

SLL::SLL()
{
    headPtr=NULL;
};

void SLL::insertFront(int x)
{
    Node* n=new Node;  // create a new node and assign its address to node ptr n
    n->value=x;
    n->next=headPtr;
    headPtr=n;
};

void SLL::insertEnd(int x){
    Node* n=new Node;
    n->value=x;
    n->next=NULL;

    Node* p=headPtr;
    while(p->next != NULL){
        p=p->next;
    }
    p->next = n;
}

int SLL::head()
{
    cout <<"Head: " <<headPtr->value <<endl;
    return headPtr->value;
};

int SLL::tail(){
    Node *p=headPtr;
    while(p->next != NULL){
        p=p->next;
    }
    cout <<"tail: "<< p->value <<endl;
    return p->value;
}

bool SLL::isEmpty()
{
    if(headPtr==NULL)
    {
        cout <<"The list is empty." <<endl;
        return true;
    }
    else
    {
        cout <<"The list is not empty." <<endl;
        return false;
    };
};

void SLL::print()
{
    Node *p=headPtr;
    cout <<"List: ";
    while(p!=NULL)
    {
        cout <<p->value <<" ";
        p=p->next;  // link hopping
    };
    cout <<endl;
};

void SLL::removeFront()
{
    Node *p=headPtr;
    if(p)
    {
        headPtr=headPtr->next;
        delete p;
    }
    else // empty list
        cout <<"Failed to remove as the list is empty." <<endl;
};
void SLL::removeEnd(){
    Node *p=headPtr;
    if(headPtr->next == NULL){
        return;
    }
    while(p->next->next != NULL){
        p = p->next;
    }
    Node *temp= p->next;
    p->next = NULL;
    delete temp;
}

Node* SLL::find(int x)
{
    Node* p=headPtr;
//    if(p)
//    {
        while(p!=NULL)
        {
          if(p->value==x)
              return p;
          else
              p=p->next;
        };
//        return p; // not in the list
//    }
//    else // empty list
        return NULL;
};

SLL::~SLL()
{
    while(!isEmpty())
        removeFront();
};


int main()
{
    SLL myList;
    myList.isEmpty();
    myList.print();
    
    if(myList.find(8))
        cout <<"Found" <<endl;
    else
        cout <<"Not found" <<endl;
    
    myList.insertFront(5);
    myList.isEmpty();
    myList.print();
    myList.insertFront(7);
    myList.print();
    //myList.removeFront();
    myList.print();
    myList.insertFront(9);
    myList.tail();
    //myList.removeFront();
    //myList.removeFront();
    myList.removeEnd();
    myList.print();
    myList.insertEnd(2);
    myList.print();
    //myList.removeFront();
    
    /*
    SLL yourList;
    yourList.insertFront(10);
    yourList.print();
    */
    
    cout <<endl <<"--end--" <<endl <<endl;
    return 0;
};
