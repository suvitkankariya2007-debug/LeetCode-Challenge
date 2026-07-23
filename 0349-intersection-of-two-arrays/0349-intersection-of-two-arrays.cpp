/*class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int>nums;
        for(int i=0;i<nums1.size();i++)
        {
            if(i>0&&nums1[i]==nums1[i-1])
            continue;
                for(int j=0;j<nums2.size();j++)
                {
                    if(nums2[j]==nums1[i])
                    {
                       
                        for(int k=0;k<nums.size();k++)
                        {
                            if(k>0&&nums[k]==nums[k-1])
                            continue;
                            else
                             nums.push_back(nums1[i]);
                        }
                        
                    }break;
                }
        
    }return nums;
    }
};*/

 class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums;

        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int k;

                    // Check whether nums1[i] is already in answer
                    for(k = 0; k < nums.size(); k++)
                    {
                        if(nums[k] == nums1[i])
                            break;
                    }

                    // If not found, insert it
                    if(k == nums.size())
                        nums.push_back(nums1[i]);

                    break;   // Stop searching nums2
                }
            }
        }

        return nums;
    }
};