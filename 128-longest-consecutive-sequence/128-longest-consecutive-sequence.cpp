class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size(), count=1, ans=1;
        if(n==0)
            return 0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]-nums[i] == 1)
                count++;
            else if(nums[i+1]-nums[i] == 0)
                continue;
            else
            {
                if(count>ans)
                    ans=count;
                
                count=1;
            }
        }
        
        if(count>ans)
            ans=count;
        
        return ans;
    }
    
};