class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)

        {
            if(nums[i]>=nums[i+1])
            continue;
            else{
            idx=i;
            break;}
            
        }
        for (int i = nums.size() - 1; i > idx; i--) {
            if(idx==-1){
reverse(nums.begin()+idx+1,nums.end());
            return;}
    if (nums[i] > nums[idx]) {
        swap(nums[idx], nums[i]);
        break;
    }
}reverse(nums.begin()+idx+1,nums.end());


        
    }
};