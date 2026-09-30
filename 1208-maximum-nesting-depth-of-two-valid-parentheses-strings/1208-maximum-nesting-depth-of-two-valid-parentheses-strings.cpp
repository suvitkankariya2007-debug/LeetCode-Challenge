class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
       
        vector<int>ans;
        int c=0;
        for(int i=0;i<seq.length();i++)
        {
            if(seq[i]=='('){
                ans.push_back(c%2);
                c++;

            }
            else{
                                c--;    

                           ans.push_back(c%2);
            }
            

        }
        return ans;
        
    }
};