#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;

        for(int i=0; i<k; i++){
            int temp = nums.back(); //the last element of nums vector
            nums.pop_back();
            nums.insert(nums.begin(), temp);
        }
    }
};
// "38 / 38 test cases passed, but took too long."
// solution 2
class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; 
      
    vector<int> temp(nums.end() - k, nums.end());
    nums.erase(nums.end() - k, nums.end());
    nums.insert(nums.begin(), temp.begin(), temp.end());
  }
};
