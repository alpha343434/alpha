class Solution {
public:
    bool isPalindrome(string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(std::remove_if(s.begin(), s.end(), 
        []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());

        if(s.empty() || s.size()==1) return true;

        for(int i=0; i<s.size()/2; i++){
            if(s[i] != s[s.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};

// differant approach with using stack:
class Solution {
public:
    bool isPalindrome(string s) {
        stack <char> s2;
        int i;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(std::remove_if(s.begin(), s.end(), 
        []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());

        if(s.empty() || s.size()==1) return true;

        for(i=0; i<s.length()/2; i++)
            s2.push(s[i]);
        
        if(s.length() % 2) i++;

        for(;i<s.length(); i++){
            if(s[i] != s2.top()){
                return false;
            }
            s2.pop();
        }
        return true;
    }
};
