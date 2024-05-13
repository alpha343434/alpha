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
    bool ans=true;
    while(!s.empty() && i<str.size()){
        char popped=s.top();
        s.pop();

        char current=str[i++];
        
        if(popped != current){
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
/* without stack structure
#include <iostream>
#include <math.h>

bool isPalindrome(string input) {
	for (int i = 0; i < floor(input.length() / 2); i++) {
		if (input[i] != input[input.length() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	string input;
	cin >> input;

	if (isPalindrome(input)) {
		cout <<input <<" is a palindrome." <<endl;
	} else {
		cout <<input <<" is not a palindrome." <<endl;
	}

	return 0;
}
*/
