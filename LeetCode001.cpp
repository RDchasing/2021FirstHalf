class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re;
        for(int i = 0;i<nums.size();++i)
        {
            for(int j = i+1;j<nums.size();++j)
            {
                if(nums[i]+nums[j]==target)
                {
                    re.push_back(i);
                    re.push_back(j);
                    return re;
                }
            }
        }
        return re;
    }
};