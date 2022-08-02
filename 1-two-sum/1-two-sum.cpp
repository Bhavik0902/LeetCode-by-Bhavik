class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res, temp;
        temp = nums;
        sort(nums.begin(),nums.end());        
        
        int n = nums.size(), low=0, high = n-1;
        
        while(low<high)
        {
            if(nums[low] + nums[high]==target)
                break;
            
            if(nums[low] + nums[high]>target)
                high--;
            else
                low++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(temp[i]==nums[low])
                res.emplace_back(i);
            else if(temp[i]==nums[high])
                res.emplace_back(i);
        }
        
        return res;
        
        
    }
};