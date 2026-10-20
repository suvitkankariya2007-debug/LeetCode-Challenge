class Solution {
public:
static bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
vector<pair<int,int>>v;
        map<int, int> mpp;

for (int i = 0; i < nums.size(); i++) {
    mpp[nums[i]]++;
}
for(auto it:mpp)
{
    v.push_back({it.first,it.second});
}
sort(v.begin(), v.end(), compare);//Standard sort() cannot directly use it this way because it requires a callable comparator that doesn't need a Solution object.
        vector<int> ans;

for (int i = 0; i < k; i++) {
    ans.push_back(v[i].first);
}
  return ans;  }
};