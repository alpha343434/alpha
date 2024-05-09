#include <iostream>
#include <stack>
using namespace std;

void print(stack <int> s)
{
    cout <<"Stack: ";
    while(!s.empty())
    {
        cout <<s.top() <<" ";
        s.pop();
    };
    cout <<endl;
};

int main()
{
    stack <int> s1;
    
    if(s1.empty())
        cout <<"The stack is empty." <<endl;
    else
        cout <<"The stack is not empty." <<endl;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    
    print(s1);
    
    cout <<"Number of elements in the stack: " <<s1.size() <<endl;
    cout <<"Top element of the stack: " <<s1.top() <<endl;
    
    s1.pop(); cout <<"Pop!" <<endl;
    cout <<"Top element of the stack: " <<s1.top() <<endl;
    
    print(s1);
    s1.pop();
    s1.pop();
    s1.pop();  // stack underflow
    
    cout <<endl <<endl;
    return 0;
};

