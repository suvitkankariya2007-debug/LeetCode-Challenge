class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
       set<vector<int>>st;
        int n=nums.size();

//vector<vector<int>>ans;

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {set<long long>s;//resetting for each pair of i,j
        for(int k=j+1;k<n;k++)
        {
           
               long long sum=1LL*nums[i]+nums[j]+nums[k];
                
                long long fourth=target-sum;
                if(s.find(fourth)!=s.end())
                {
vector<int>temp;
temp.push_back(nums[i]);
temp.push_back(nums[j]);
temp.push_back(nums[k]);
temp.push_back((int)fourth);
sort(temp.begin(),temp.end());
st.insert(temp);
                }
                s.insert(nums[k]);

//this wpuld comparre the elements element by element not by index
                }
            
        }
    }vector<vector<int>>ans(st.begin(),st.end());//st.begin() points to the first element of the set.
//st.end() points to the position just past the last element.
return ans;
}
        
        
};