class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>res;
        map<int, int>hm;
        for(int i=0;i<nums.size();i++)
        {
            hm[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(hm.find( temp  ) != hm.end())
            {
                res.push_back(nums[i]);
                res.push_back(temp);
            }
        }
        
        return res;
    }
};