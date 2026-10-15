class Solution {
public:
    int sumCounts(vector<int>& nums) {int sum=0;
    for(int i=0;i<nums.size();i++)
    {vector<int>ans;unordered_set<int>s;
        for(int j=i;j<nums.size();j++)
        {
            ans.push_back(nums[j]);
            
          // if(!s.count(nums[j])){ is wrong bcz 1 1 are 2 distinct subarrays at diff index
                s.insert(ans.back());//inserting just the l;ast elemnet inserted into ans
             sum+=s.size()*s.size();
           }

                }               
            

      return sum;  }
    };

