class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount; // Use a hash table for efficient character counts

        for (char c : s) {
            charCount[c]++; // Increment count for each character
        }

        for (int i = 0; i < s.length(); i++) {
            if (charCount[s[i]] == 1) { // Check if count is 1 (unique character)
                return i;
            }
        }

        return -1; // No unique character found
    }
};
