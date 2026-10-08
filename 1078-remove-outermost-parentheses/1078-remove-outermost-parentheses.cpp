class Solution {
public:
    string removeOuterParentheses(string s) {
        string p="";
        int c=0;
        //int freq=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                if(c>0)
                p+=s[i];
            c++;
            }
           
            else{
            c--;
            if(c!=0)
            p+=s[i];

            
            }
        }return p;
        
    }
};