class Solution {
public:
    bool isPalindrome(string s) 
      {
        for(int j=0;j<s.length();j++)
        {
            s[j]=tolower(s[j]);
        }
       
    

        int j = s.length() - 1;

        for(int i = 0; i < s.length(); i++)
        {
            if(!((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= '0' && s[i] <= '9')))
            {
                continue;
            }

            while(j >= 0 &&
                  !((s[j] >= 'a' && s[j] <= 'z') ||
                    (s[j] >= '0' && s[j] <= '9')))
            {
                j--;
            }

            if(s[i] != s[j])
                return false;

            j--;
        }

        return true;
    }
};