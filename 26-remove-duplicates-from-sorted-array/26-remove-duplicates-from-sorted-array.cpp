class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[temp-1])
                nums[temp++] = nums[i];
        }
        
        return temp;
        
    }
};