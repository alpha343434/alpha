class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> str1;
        unordered_map<char, int> str2;

        for (char c : s) {
            str1[c]++; 
        }
        for (char c : t) {
            str2[c]++; 
        }
        if (str1.size() != str2.size()) {
            return false;
        }
        for (const auto& [key, value] : str1){
            auto it = str2.find(key);
            if (it == str2.end()){
                return false;
            }
            if (it->second != value){
                return false;
            }
        }
        return true;
    }
};

// a better solution:
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for (auto x : s) {
            count[x]++;
        }        
        for (auto x : t) {
            count[x]--; //decrement the characters frequency
        }       
        for (auto x : count) {
            if (x.second != 0) { //".second" = value portion
                return false;
            }
        }        
        return true;
    }
};

// O(nlogn) time complexity sorting approach:
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
