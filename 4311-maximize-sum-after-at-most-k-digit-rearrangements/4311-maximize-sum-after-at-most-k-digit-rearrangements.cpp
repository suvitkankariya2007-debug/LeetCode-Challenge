class Solution {
public:
   long long func(int num) {
    vector<int> ans;

    while (num > 0) {
        int rem = num % 10;
        ans.push_back(rem);
        num /= 10;
    }

    sort(ans.begin(), ans.end());
   // reverse(ans.begin(),ans.end());

    long long result = 0;
    for (int j=ans.size()-1;j>=0;j--) {
        result = result * 10 + ans[j];
    }

    return result;
}
    long long maximizeSum(vector<int>& nums, int k) {

long long s = 0;
vector<long long> gain;

for (int i = 0; i < nums.size(); i++) {
s+=nums[i];
long long best=func(nums[i]);
gain.push_back(best-nums[i]);}
sort(gain.begin(),gain.end());
reverse(gain.begin(),gain.end());
        for (int i = 0; i < k; i++) {
    s += gain[i];
}

return s;
    }
};