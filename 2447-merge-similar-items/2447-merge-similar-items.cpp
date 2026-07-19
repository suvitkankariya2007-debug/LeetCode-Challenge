class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {

        vector<vector<int>> ans = items1;

        // Traverse items2
        for (int i = 0; i < items2.size(); i++) {

            bool found = false;

            // Search in ans
            for (int j = 0; j < ans.size(); j++) {

                if (items2[i][0] == ans[j][0]) {
                    ans[j][1] += items2[i][1];
                    found = true;
                    break;
                }
            }

            // If value not found, insert it
            if (!found) {
                ans.push_back(items2[i]);
            }
        }

        // Sort according to value
        sort(ans.begin(), ans.end());

        return ans;
    }
};
        
        
 