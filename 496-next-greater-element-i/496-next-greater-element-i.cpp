class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(int i=0;i<nums1.size();i++){
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            if(it != (nums2.end()-1)){
                bool ans = false;
                for(auto t=it+1;t<nums2.end();t++)
                {
                    if(*t>*it)
                    {
                        vec.push_back(*t);
                        ans = true;
                        break;
                    }
                }
                if(ans==false)
                    vec.push_back(-1);
            }else{
                vec.push_back(-1);
            }
        }
        return vec;
    }
};