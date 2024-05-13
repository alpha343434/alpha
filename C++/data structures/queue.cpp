#include <iostream>
#include <queue>
using namespace std;

// Queue (int)

void showq(queue<int> q)
{
    while(!q.empty()){
        cout <<q.front() <<" ";
        q.pop();
    }
    cout <<endl;
};

int main()
{
    queue <int> q;

    q.push(9);
    q.push(8);
    q.push(7);

    cout <<"q: ";
    showq(q);

    cout <<"q.size(): " <<q.size() <<endl;
    cout <<"q.front(): " <<q.front() <<endl;
    cout <<"q.back(): " <<q.back() <<endl;

    cout <<"q.pop(): ";
    q.pop();
    showq(q);
    return 0;
};
