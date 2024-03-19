class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int newindex = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[newindex] = nums[i];
                newindex++;
            }
        }
        while(newindex < nums.size()) {          
            nums[newindex] = 0;
            newindex++;
        }
    }
};

//with a better writing:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int newindex = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[newindex++] = nums[i];
            }
        }
        while(newindex < nums.size()) {
            nums[newindex++] = 0;
        }
    }
};
