class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size(), m = haystack.size();
        for(int i=0; i<m - n + 1; i++){
            int j=0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if(j == n){
                return i;
            }
        }
        return -1;
    }
};