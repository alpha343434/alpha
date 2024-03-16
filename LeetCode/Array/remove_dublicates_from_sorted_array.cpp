class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                nums.vector::erase(nums.begin()+ (i+1));
                i--;
                n--;
            }
        }
        int new_length=nums.size();
        return new_length;
    }
};
