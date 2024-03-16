class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=nums.size()-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
// time limit exceeded (O(n^2) time  complexity)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for( int num: nums){
            if(seen.count(num) > 0){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
