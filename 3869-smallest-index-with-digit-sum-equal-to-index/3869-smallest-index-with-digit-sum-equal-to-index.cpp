class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int rem;
        int s = 0;

        for (int i = 0; i < nums.size(); i++) {
            s=0;
            while (nums[i] > 0) {
                rem = nums[i] % 10;
                s += rem;
                nums[i] /= 10;
            }
            if (s == i) {
                return i;
                break;
            }
        }
        return -1;
    }
};