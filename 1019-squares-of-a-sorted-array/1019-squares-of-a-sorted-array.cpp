class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       /* for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
            
        }
        sort(nums.begin(),nums.end());//O(Nlogn)
        return nums;
        */
        //using 2 pointer 
     vector<int> res(nums.size());

int left = 0;
int right = nums.size() - 1;
int k = nums.size() - 1;

while (left <= right)
{
    if (abs(nums[left]) > abs(nums[right]))
    {
        res[k]=nums[left]*nums[left];
        left++;

    }
    else
    {
        res[k]=nums[right]*nums[right];
        right--;
    }

    k--;
    }
return res;
}
};

