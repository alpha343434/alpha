#include <iostream>
#include <stack>
using namespace std;

// Stack (char)

int main()
{
    stack<char> s;
    string str;
    cout <<"Palindrome checker: ";
    cin >>str;

    for(char c:str){
        s.push(c);
    }

    int i=0;
    while(!s.empty() && i<str.size()){
        char popped=s.top();
        s.pop();

        char current=str[i++];
        
        if(popped != current){
            cout <<str <<" is NOT a palindrome." <<endl;
            break;
        }
        else{
            cout <<str <<" is a palindrome.";
            break;
        }
    }
    return 0;
};
