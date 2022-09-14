class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string res="";
        bool check = false;
        
        if(nums.size()==1)
        {
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                if(!check)
                {
                    check = true;
                    res += to_string(nums[i-1]);   
                }
                if(i==nums.size()-1)
                {
                    res += "->" + to_string(nums[i]);
                    ans.push_back(res);
                }                                 
            }
            else 
            { 
                if(!check)
                    res += to_string(nums[i-1]);  
                else
                {
                    res += "->" + to_string(nums[i-1]);
                    check = false;                                
                }
                ans.push_back(res);

                res = "";
                if(i==nums.size()-1)
                    ans.push_back(to_string(nums[i]));  
                
            }            
        }
        
        return ans;
        
    }
};