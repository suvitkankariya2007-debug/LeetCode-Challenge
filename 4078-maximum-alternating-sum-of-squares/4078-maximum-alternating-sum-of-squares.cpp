class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    // to put the maxm elemen ts on even positions  then rest ko anywhere  only returning a valjue
    long long n=nums.size();
    sort(nums.begin(),nums.end());
  long long s=0;
  vector<long long>a;
  for(int i=0;i<n;i++){
  a.push_back(nums[i]*nums[i]);
  }
  sort(a.begin(),a.end());

  int j=n-1;
  if(n%2==0)
  {
  while(j>=n/2)
  {
    s+=a[j];
    j--;
  }
  }
  else
  {
    while(j>=(n-1)/2)
    {
        s+=a[j];
        j--;
    }
  }
  for(int k=j;k>=0;k--){
  s-=a[k];}return s;
        
    }
};