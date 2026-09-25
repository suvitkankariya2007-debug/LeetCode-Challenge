class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int k;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) { int ansVal = -1;
                if (nums1[i] == nums2[j]) {
                    if (j != nums2.size() - 1) {
                     

k = j + 1;

while(k < nums2.size())
{
    if(nums2[k] > nums2[j])
    {
        ansVal = nums2[k];
        break;
    }

    k++;
}
                    }

ans.push_back(ansVal);
                }
            }
        }return ans;
    }
    };