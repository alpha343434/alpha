class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n - 1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// a better approach: (O(n) time complexity)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> value_to_index;
        for(int i=0;i<nums.size();i++){
            int needed_value=target - nums[i];
            if(value_to_index.find(needed_value)!=value_to_index.end()){
                return {i,value_to_index[needed_value]};
            }
            value_to_index[nums[i]]=i;
        }
    return {};
    }
};
