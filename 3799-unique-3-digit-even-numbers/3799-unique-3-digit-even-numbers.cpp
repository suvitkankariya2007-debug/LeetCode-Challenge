class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        //3 loops
        unordered_set<int>s;//bcz 112 is also possible 
        int c=0;
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]==0)
            continue;
            for(int j=0;j<digits.size();j++)
            {
                for(int k=0;k<digits.size();k++)
                {
                    //112
                    if(i==j||j==k||k==i)
                    continue;
                    int num=digits[i]*100+digits[j]*10+digits[k];
                    if(num%2==0)
                     s.insert(num);

                    
                }
            }
        }return s.size();
    




        
    }
};