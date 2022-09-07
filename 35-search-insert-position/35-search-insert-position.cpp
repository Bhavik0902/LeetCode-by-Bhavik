class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high = nums.size()-1, mid;
        
        while(high-low>1)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                low = mid;
                break;
            }
            else if(nums[mid]<target)
                low = mid+1;
            else
                high = mid;
        }
        if(nums[low]>=target)
            return low;
        else if(target>nums[high])
            return high+1;
        else 
            return high;
    }
};