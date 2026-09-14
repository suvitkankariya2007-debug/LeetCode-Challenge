class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]].push_back(i);
        }
        int flag=0,c=0;
        vector<int>temp;
      for(auto it:mpp){
      temp=it.second;
      if(temp.size()<3)
      continue;
      int diff=temp[1]-temp[0];
      for(int i=2;i<temp.size();i++){
      if(diff!=temp[i]-temp[i-1]){      flag=1;
      break;
      }
      }
    if(flag==0)
      c++;
      }
      
      return c;

        
    }
};