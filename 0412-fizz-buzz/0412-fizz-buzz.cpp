class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string>ans;
        for(int i=1;i<=n;i++)
        {
            if(i%5==0&&i%3==0)
            ans.push_back("FizzBuzz");
            else if(i%3==0)
            ans.push_back("Fizz");
            else if(i%5==0)
            ans.push_back("Buzz");
            else
             ans.push_back(to_string(i));//vector<string>, writing answer.push_back(i) where i is an integer will cause a compilation error. 
        }
        
    return ans;}
};