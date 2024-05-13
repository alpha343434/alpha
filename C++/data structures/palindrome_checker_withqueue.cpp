#include <iostream>
#include <queue>
using namespace std;


int main()
{
    queue<char> q;
    string str;
    cout <<"Palindrome checker: ";
    cin >>str;

    for(char c:str){
        q.push(c);
    }

    int i=str.size()-1;
    bool ans=true;

    //dequeue characters and compare them with remaining characters in str
    while(!q.empty() && i>=0){
        char queued=q.front();
        q.pop();

        char current=str[i--];
        
        if(queued != current){
            ans=false;
            break;
        }
    }
    if(!ans){
        cout <<str <<" is NOT a palindrome." <<endl;
    }else{
        cout <<str <<" is a palindrome.";
    }
    return 0;
};
