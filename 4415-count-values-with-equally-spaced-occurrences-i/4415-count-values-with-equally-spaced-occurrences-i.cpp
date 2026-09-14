class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_set<int> seen;
        int d;
        int c = 1, n = 0;
        int i;

        for(int start = 0; start < nums.size(); start++)
        {
            i = start;

            if(seen.count(nums[i]))
                continue;

            seen.insert(nums[i]);

            int j = i + 1;

            // Find second occurrence
            while(j < nums.size() && nums[j] != nums[i])
                j++;

            // No second occurrence
            if(j == nums.size())
                continue;

            // Difference between first and second
            d = j - i;

            // Move i to second occurrence
            i = j;
            c++;

            // Move j to expected third occurrence
            j = j + d;

            // Check third occurrence
            if(j < nums.size() && nums[j] == nums[i])
            {
                i = j;
                c++;
            }

            // We need exactly 3 occurrences
            if(c == 3)
            {
                c = 0;
                j = 0;

                // Count total occurrences of this number
                while(j < nums.size())
                {
                    if(nums[j] == nums[i])
                        c++;

                    j++;
                }

                if(c == 3)
                    n++;
            }

            c = 1;
        }

        return n;
    }
};