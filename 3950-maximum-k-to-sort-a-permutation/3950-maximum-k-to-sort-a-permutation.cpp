class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int mini=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=i)
    mini&=nums[i];
    } if(mini==INT_MAX)
        return 0;
    return mini;
       
    }
};