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
